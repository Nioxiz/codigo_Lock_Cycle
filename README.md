lock_cycle
lock_cycle é um projeto que visa oferecer uma solução segura e organizada para o estacionamento de bicicletas em espaços públicos. O sistema utiliza sensores e automação para garantir que as bicicletas sejam guardadas de forma adequada, reduzindo riscos de roubo e a ocupação desordenada de áreas comuns.
_______________________________________________________________________________________________________________________________________________________________________________________________
📌 Motivação
A ideia surgiu a partir da observação do ambiente ao redor do campus da UFES - Goiabeiras. Foi identificado um problema recorrente: bicicletas espalhadas por diversos pontos, muitas vezes deixadas em locais impróprios, gerando reclamações da comunidade acadêmica e aumentando a incidência de furtos.

Esse cenário, que persiste há anos, motivou a equipe a desenvolver uma alternativa prática e acessível para resolver a falta de um bicicletário adequado e seguro.
_______________________________________________________________________________________________________________________________________________________________________________________________
🔍 Solução Proposta
O lock_cycle consiste em um bicicletário automatizado, capaz de:

Detectar a presença de bicicletas utilizando sensores ultrassônicos.

Controlar o acesso por meio de um servo motor (travamento/liberação).

Indicar visualmente o status das vagas através de LEDs (verde para vaga disponível, vermelho para ocupada).

Com essa abordagem, buscamos não apenas proteger as bicicletas, mas também organizar o espaço público de maneira eficiente.
_______________________________________________________________________________________________________________________________________________________________________________________________
🛠️ Protótipo
Após a fase de ideação, partimos para a construção do protótipo. Utilizamos ferramentas de modelagem 3D disponíveis gratuitamente, como Tinkercad e Blender, para projetar a estrutura física do bicicletário.

Abaixo está a primeira imagem da ideia inicial do sistema:

<img width="400" height="400" alt="image" src="https://github.com/user-attachments/assets/e1055098-a577-4eec-8031-6ca9a4bec9d9" />
<img width="400" height="500" alt="image" src="https://github.com/user-attachments/assets/f090149e-2c8f-4354-ac91-0dc0b4186c9f" />

_______________________________________________________________________________________________________________________________________________________________________________________________

⚡ Componentes Elétricos Utilizados
2 sensores ultrassônicos (para detecção de bicicletas)

1 servo motor MG995 (para controle da trava)

2 LEDs (verde e vermelho – indicadores de status)

1 arduino uno

60 jumpers (para as conexões)

2 cabos para alimentação do circuito
