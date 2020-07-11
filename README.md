# Cifra-de-Cesar

<b> Cifra de César - 1253 </b>

Júlio César usava um sistema de criptografia, agora conhecido como Cifra de César, que trocava cada letra pelo equivalente em duas posições à Esquerda no alfabeto (por exemplo, 'C' vira 'A', 'T' vira 'R', etc.). Ao começo do alfabeto nós voltamos para o fim, isto é 'A' vira 'Y'. Nós podemos, é claro, tentar trocar as letras com quaisquer número de posições.

<b>Entrada</b>
A entrada contém vários casos de teste. A primeira linha de entrada contém um inteiro N que indica a quantidade de casos de teste. Cada caso de teste é composto por duas linhas. A primeira linha contém uma string com até 50 caracteres maiúsculos ('A'-'Z'), que é a sentença após ela ter sido codificada através desta Cifra de César modificada. A segunda linha contém um número que varia de 0 a 25 e que representa quantas posições cada letra foi deslocada para a direita.

<b>Saída</b>
Para cada caso de teste de entrada, imprima uma linha de saída com o texto decodificado (transformado novamente para o texto original) conforme as regras acima e o exemplo abaixo.

<b>Exemplo de Entrada</b>

<p>6</p>
<p>VQREQFGT</p>
<p>2</p>
<p>ABCDEFGHIJKLMNOPQRSTUVWXYZ</p>
<p>10</p>
<p>TOPCODER</p>
<p>0</p>
<p>ZWBGLZ</p>
<p>25</p>
<p>DBNPCBQ</p>
<p>1</p>
<p>LIPPSASVPH</p>
<p>4</p>

<p>Exemplo de Saída</p>

<p>TOPCODER</p>
<p>QRSTUVWXYZABCDEFGHIJKLMNOP</p>
<p>TOPCODER</p>
<p>AXCHMA</p>
<p>CAMOBAP</p>
<p>HELLOWORLD</p>

<b>A resolução desse problema se da com o propósito de compartilhar conhecimento.</b>

<b>Fonte do problema : URI - Universidade Regional Integrada</b>

<a href = https://www.urionlinejudge.com.br/judge/pt/problems/view/1253 > Clique aqui para ir ao site</a>
<p><b>Gabriel Lima</b></p>