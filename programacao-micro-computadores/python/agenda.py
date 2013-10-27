#!/usr/bin/python
# -*- coding:utf-8 -*-
import os

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

def check_commands():
    while True:
        input()


def salvar_arquivo(arquivo):
    arquivo.write()

def abre_arquivo():
    try:
        return open(os.path.join(os.path.dirname(__file__), NOME_DO_ARQUIVO), 'w').read()
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
    return eval(arquivo.read()) # vai retornar um dict


def carrega_linha_a_linha(linha):
    try:
        return eval(linha) # retorna um dict de um registro apenas
    except Exception, e:
        pass
    