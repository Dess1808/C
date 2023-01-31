/*
    logica principal
    tirar a diferenca entre dias e horas

    rascunho
    24h em segundo 86400s
    60m em segundos 3600s

    obs: tratamento especial para quando for 24h completas, 1 dia, horas zerdas

    logica principal:
    transformar hora e minuto em segundos das entredas (transformar na menor unidade que eh "segundos") da duas entradas de horas
    tirar a diferenca entre inicio e fim e sair transformando de volta para hora minuto e segundo

    obs: todas a unidade devem ser calculadas em "segundos" para depois serem devidamente transformadas para suas unidades finais

    formula principal horas:
    tirar a diferenca 
        diferencaHora (horaSegundoStart + horaSegundoMinuto + segundosStart) - (horaSegundoEnd + minutoSegundoEnd + segundoEnd)
        diferencaMinuto (horaSegundoMinuto + segundosEnd) - (minutoSegundoEnd + segundoEnd)
        diferencaSegundos (segundo) - (segundo)
        
        calculando hora 
            if(diferencaX < 0)
                xFinal = (HORASEGUNDO - deferencaX) - HORASEGUNDO / valorRelogio;
            else 
                xFinal = HORASEGUNDO - diferencaX / valorRelogio;
    
        calculando minuto
            mesmo calculo
        calculando segundo
            mesmo calculo 
        
    Obs 1: 
    se hora 24, minuto 60 e segundo 60
    significa que temos um dia completo
        zerar hora, minuto e segundo, e somar a diferenca absoluta de "dias"

    obs 2: o evento e de apenas 1 mes???
    calcular a quantidade de dias entre os dois dias informados
    valor absoluto entre os dias -1

    OBS 3: se a diferenca de dias for 0 e a diferenca de horas der 24h, significa que bateu um dia,
    devo zerar as horas e informar apenas os dias
    formula para dia:
    (diaStart - diaEnd) - 1 vai ser a diferenca entre total de dias

    obervacoes: 
*/