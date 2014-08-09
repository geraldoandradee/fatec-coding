''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
' Programa para verificação se uma sentenca eh um palindromo por 
' Geraldo Andrade <geraldo@geraldoandrade.com>
''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
Dim entradaDoUsuario As String
Dim sentencaEntrada As String
Dim f2 As String
Dim f3 As String
Dim f4 As String
Dim espaco As String
Dim s As Integer
Dim s1 As Integer
Dim s2 As Integer
Dim s3 As Integer
Dim sm As Integer
Dim letra AS String
Dim I As Integer
Dim J As Integer
Dim letrasMaiusculas As String
Dim letrasMinusculas As String
Dim comPontuacao As String
Dim ehPalindromo As Integer

comPontuacao = ".,;-_/?!:#&*@$%¨"
letrasMinusculas = "abcdefghijklmnopqrstuvwxyz" 
letrasMaiusculas = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
espaco = " "
f2 = ""

Print "Esse programa tem como objetivo verificar se uma sequencia de caracteres eh um palindromo."
Line Input "Digite uma palavra ou frase:", entradaDoUsuario

I = -1
J = -1
s1 = len (comPontuacao)
s = Len(entradaDoUsuario) ' pegamos o s da f inteira para percorrê-la
sm = Len(letrasMaiusculas)

' vamos fazer um match de todas as letras minusculas e deixa-las maiusculas
For I = 0 To s step 1
  For J = 0 To sm step 1
    if MID(entradaDoUsuario,I,1) = MID(letrasMinusculas,J,1) Then
      letra = MID(letrasMaiusculas,J,1)
      exit For
    else
      letra = MID(entradaDoUsuario,I,1)
    End If
    Next J
  sentencaEntrada = sentencaEntrada + letra
Next I

' vamos retirar os espacos da mesma maneira
For i = 0 To s step 1
  IF MID(sentencaEntrada,I,1) <> espaco Then
    f2 = f2 + MID(sentencaEntrada,I,1)
  End If
Next i

s2 = Len(f2)
' vamos retirar os espacos
For i = 0 To s2 step 1
  For j = 0 To s1 step 1
    if MID(f2,I,1) = MID(comPontuacao,J,1) Then
      letra = ""
      exit for
    else
      letra = MID(f2,I,1) 
    End If
  Next j
  f3 = f3 + letra
Next i

s3 = Len(f3)
' vamos inverter
For I = s3 To 0 step -1
  f4 = f4 + MID(f3,I,1)
Next I

ehPalindromo = 0
' vamos verificar se eh um palindromo ou nao
For i = 0 To s step 1
  if MID(f3,I,1) <> MID(f4,I,1) Then
    ehPalindromo = 1
    exit for
  End If
Next i

' vamos a nossa resposta
if ehPalindromo <> 1 Then
  Print "A Sentenca eh um palindromo"
else
  Print "A Sentenca nao eh um palindromo"  
End If

sleep: End