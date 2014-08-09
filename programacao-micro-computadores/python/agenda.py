#!/usr/bin/python
# -*- coding:utf-8 -*-
import os, json

#especificaçao do deluqui agenda
# uma agenda:
# i - para incluir
# a - alterar
# e - excluir
# l - limpar
# m - mostrar
# o - ordernar (asc ou desc)
# s - salvar (em arquivo)
# f - fim

# Informar Nome, Data Nascimento, Telefone

NOME_DO_ARQUIVO = 'agenda.bla'
LIMITE_REGISTROS = 4
agenda = {}


def check_commands():
    while True:
        print '############################################################################'
        print '########################## AGENDA VIRTUAL ##################################'
        print '######################## %s registros de %s ################################' % (
            pega_total_registros_usados(),
            LIMITE_REGISTROS)
        print 'Escolha uma das opções a seguir:'
        print '[i] para incluir'
        print '[a] para alterar'
        print '[p] para pesquisar'
        print '[e] para excluir'
        print '[l] para limpar'
        print '[m] para mostrar'
        print '[o] para ordenar'
        print '[s] para salvar'
        print '[f] para fim'

        tecla = raw_input('Digite uma opção: ')

        if tecla == 'i':
            inclui_registro()
        elif tecla == 'a':
            alterar_registro()
        elif tecla == 'e':
            remover_registro()
        elif tecla == 'l':
            limpar_registros()
        elif tecla == 'm':
            mostrar_agenda()
        elif tecla == 'o':
            ordenar_registros()
        elif tecla == 'p':
            mostrar_registro()
        elif tecla == 's':
            salvar_arquivo()
        elif tecla == 'f':
            print '##########################    ATE LOGO    #################################'
            exit()
        else:
            print '################    Opção inválida. Tente novamente    ####################'


def mostrar_registro():
    sure = raw_input('Digite o id do registro: ')

    try:
        sure = int(sure)
    except Exception:
        print 'Isso (%s) não parece um inteiro válido' % sure
        return None

    if 'registros' in agenda:
        print '##########################   AGENDA   ######################'
        for item in agenda['registros']:
            if item['id'] == sure:
                print 'ID: %(id)s - %(nome)s - %(data_nascimento)s - %(telefone)s' % item
    else:
        print '########################## NAO EXISTEM REGISTROS ###########################'


def limpar_registros():
    sure = raw_input('Tem certeza? Confirmando essa opção isso apagará sua agenda completamente. [y, n]')
    if sure == 'y':
        agenda['registros'] = []
        salvar_arquivo()
    else:
        print 'Nada foi alterado.'


def ordenar_registros():

    ordem = raw_input('Qual alfabética crescente ou reversa?. [c, r]')

    if existe_registros():
        print '##################   REGISTROS ORDENADOS   #################'
        ordenar_isso = [''.join([str(registro['nome']), '-', str(registro['id'])]) for registro in agenda['registros']]
        ordenar_isso.sort()
        if ordem == 'r':
            ordenar_isso.reverse()

        for nome in ordenar_isso:
            id = int(nome.split('-')[1])
            item = get_item_na_agenda(id)
            print 'ID: %(id)s - %(nome)s - %(data_nascimento)s - %(telefone)s' % item


def get_item_na_agenda(id):
    for registro in agenda['registros']:
        if registro['id'] == id:
            return registro

def remover_registro():
    id = raw_input('Digite o id do registro: ')

    sure = raw_input('Tem certeza? Confirmando essa opção isso apagará esse registro da sua agenda. [y, n]')

    if sure != 'y':
        return None

    try:
        id = int(id)
    except Exception:
        print 'Isso (%s) não parece um inteiro válido' % id
        return None

    if 'registros' in agenda:

        for item in agenda['registros']:
            if item['id'] == id:
                agenda['registros'].pop(agenda['registros'].index(item))
                print 'ID: %(id)s - %(nome)s - %(data_nascimento)s - %(telefone)s' % item
                print '##############   REGISTRO REMOVIDO COM SUCESSO   ###################'
    else:
        print '########################## NAO EXISTEM REGISTROS ###########################'


def alterar_registro():
    id = raw_input('Digite o id do registro: ')

    try:
        id = int(id)
    except Exception:
        print 'Isso (%s) não parece um inteiro válido' % id
        return None

    if existe_registros():
        print '##################   ALTERACAO REGISTROS   #################'
        for item in agenda['registros']:
            if item['id'] == id:
                print 'ID: %(id)s - %(nome)s - %(data_nascimento)s - %(telefone)s' % item

                nome = raw_input('Digite o nome: ')
                data_nascimento = raw_input('Digite a data de nascimento: ')
                telefone = raw_input('Digite o telefone: ')

                agenda['registros'][id] = {'id': id, 'nome': nome, 'data_nascimento': data_nascimento,
                                           'telefone': telefone}
                salvar_arquivo()

        print '#############   REGISTRO ALTERADO COM SUCESSO   ############'
    else:
        print '########################## NAO EXISTEM REGISTROS ###########################'


def mostrar_agenda():
    if existe_registros():
        print '##########################   AGENDA   ######################'
        for item in agenda['registros']:
            print 'ID: %(id)s - %(nome)s - %(data_nascimento)s - %(telefone)s' % item
    else:
        print '########################## NAO EXISTEM REGISTROS ###########################'


def inclui_registro():
    if len(agenda['registros']) >= LIMITE_REGISTROS: # not zero based
        print 'Essa agenda está cheia'
        return None

    print '########################## NOVO REGISTRO  ##################################'
    nome = raw_input('Digite o nome: ')
    data_nascimento = raw_input('Digite a data de nascimento: ')
    telefone = raw_input('Digite o telefone: ')

    agenda['registros'].append({'id': len(agenda['registros']), 'nome': nome,
                                'data_nascimento': data_nascimento, 'telefone': telefone})
    salvar_arquivo()


def pega_total_registros_usados():
    if 'registros' in agenda:
        return len(agenda['registros'])
    else:
        return 0


def salvar_arquivo():
    try:
        arquivo = open(os.path.join(os.path.dirname(__file__), NOME_DO_ARQUIVO), 'w')
        arquivo.write(json.dumps(agenda))
        print 'Salvo com sucesso!'
    except Exception, e:
        raise Exception('Erro ao tentar salvar o arquivo. ')


def abre_arquivo():
    try:
        return open(os.path.join(os.path.dirname(__file__), NOME_DO_ARQUIVO), 'r').read()
    except Exception, e:
        raise Exception('Arquivo não existe ou sem permissão de manipulação.')


def abre_linha_a_linha():
    try:
        arquivo = open(os.path.join(os.path.dirname(__file__), NOME_DO_ARQUIVO), 'w')
        for linha in arquivo.readline():
            yield linha
    except Exception, e:
        raise Exception('Arquivo não existe ou sem permissão de manipulação.')


def carrega_dados(arquivo):
    """ Aqui vamos carregar a base de dados em memória """

    if not arquivo:
        dados = json.loads('{}')
    else:
        dados = json.loads(arquivo)

    if 'registros' not in dados:
        dados['registros'] = []

    return dados


def carrega_linha_a_linha(linha):
    try:
        return eval(linha) # retorna um dict de um registro apenas
    except Exception, e:
        pass

def existe_registros():
    if 'registros' in agenda and len(agenda['registros']):
        return True
    else:
        return False

# vamos carregar os dados
arquivo = abre_arquivo()
agenda = carrega_dados(arquivo)

check_commands()



