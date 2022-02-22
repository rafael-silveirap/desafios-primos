# Desafios números primos
Alguns desafios na linguagem C usando números primos

## Desafio 1:
Escrever um código que recebe um número natural e diz se é primo ou não.

## Desafio 2:
Exibir o numero primo gerado pela a multiplicação de todos os outros primos anteriores somado com 1. <br>
<p align="center"><img src="https://media.discordapp.net/attachments/780042178424471583/945649499320234034/751211349627109416.png?width=1440&height=203" width="300"></p> <br>
Onde:
* P_1 é o primeiro numero primo partindo do zero (no caso o numero 2)
* P_i é o i-nesimo primo partindo do zero. Por exemplo P_3 = 5, pois 5 é o quinto primo (2,3, 5)
* Px é um número primo <br> <br>

Exemplo:
```
Entrada: 10 | Saída: 211
Entrada: 20 | Saída: 9699691
```

## Desafio 3:
A propriedade do desafio 2 nem sempre é válida, então o desafio 3 é dizer se o Px realmente é um número primo ou não, caso seja, dizer qual sua posição na ordem dos números primos.<br>
Exemplo:
```
Entrada: 11 | Saída: O numero 11 eh primo. 11 eh o n=5. O resultado de Px eh 2311 e esse valor eh primo de posicao n = 344.
Entrada: 13 | Saída: O numero 13 eh primo. 13 eh o n=6. O resultado de Px eh 30031 e esse valor nao eh primo.
Entrada: 17 | Saída: O numero 17 eh primo. 17 eh o n=7. O resultado de Px eh 510511 e esse valor nao eh primo.
```

