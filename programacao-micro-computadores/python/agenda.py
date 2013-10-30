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
LIMITE_REGISTROS = 100
agenda = {}

def check_commands():
    while True:
        print '############################################################################'
        print '########################## AGENDA VIRTUAL ##################################'
        print '######################## %s registros de %s ################################' % (pega_total_registros_usados(agenda),
                                                                                                LIMITE_REGISTROS)
        print 'Escolha uma das opções a seguir:'
        print '[i] para incluir'
        print '[a] para alterar'
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
            alterar_registro(tecla)
        elif tecla == 'e':
            pass
        elif tecla == 'l':
            pass
        elif tecla == 'm':
            mostrar_agenda()
        elif tecla == 'o':
            pass
        elif tecla == 's':
            salvar_arquivo()
        elif tecla == 'f':
            print '##########################    ATE LOGO    #################################'
            exit()
        else:
            print '################    Opção inválida. Tente novamente    ####################'

def alterar_registro():
    pass

def mostrar_agenda():

    if 'registros' in agenda:
        print '##########################   AGENDA   ######################'
        for item in agenda['registros']:
            print 'ID: %(id)s - %(nome)s - %(data_nascimento)s - %(telefone)s' % item
    else:
        print '########################## NAO EXISTEM REGISTROS ###########################'

def inclui_registro():

    if len(agenda) > LIMITE_REGISTROS: # not zero based
        print 'Essa agenda está cheia'
        return None

    print '########################## NOVO REGISTRO  ##################################'
    nome = raw_input('Digite o nome: ')
    data_nascimento = raw_input('Digite a data de nascimento: ')
    telefone = raw_input('Digite o telefone: ')

    if 'registros' not in agenda:
        agenda['registros'] = []

    agenda['registros'].append({'id': len(agenda['registros']), 'nome':nome,
                                'data_nascimento': data_nascimento, 'telefone': telefone})
    salvar_arquivo()

def pega_total_registros_usados(agenda):
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
    if not arquivo:
        return json.loads('{}')
    else:
        return json.loads(arquivo)

def carrega_linha_a_linha(linha):
    try:
        return eval(linha) # retorna um dict de um registro apenas
    except Exception, e:
        pass

# vamos carregar os dados
arquivo = abre_arquivo()
agenda = carrega_dados(arquivo)

check_commands()