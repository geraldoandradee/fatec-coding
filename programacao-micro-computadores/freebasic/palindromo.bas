' vamos declarar algumas variaveis
dim tamanho as Integer 'tamanho da frase ou palavra
dim palindromo as String 'frase ou palavra para ser testada


' agora declarando as subrotinas
Declare Sub ChecaNumero(texto as String)
Declare Sub RemoveAcentos(texto as String)
Declare Sub RemoveEspacos(texto as String)

Print "Verificacao se uma palavra ou frase e palindromo ou nao"
Input "Entre com uma string para verificacao: ", palindromo
Print "Voce entrou com: ", palindromo

'palindromo = RemoveEspacos, palindromo
'Print palindromo

'RemoveAcentos "Geraldo àndradÉ"



Sub RemoveAcentos(texto as String)
	texto=texto
End Sub

Sub RemoveEspacos(texto as String)
	texto=texto
End Sub

' implementação de checa numero
Sub ChecaNumero(texto as String)
    texto=texto
End Sub
