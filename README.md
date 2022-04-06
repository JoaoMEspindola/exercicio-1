# <h1>Matrix-Walking</h1>
  <p>Uma matriz é uma estrutura organizada por linhas e colunas, no formato i x j, onde o primeiro elemento se encontra no canto superior esquerdo (mat[0][0]) e o último elemento no canto inferior direito mat[i][j]. No programa abaixo, é trabalho com a forma quadrática da matriz, onde o número de linhas e colunas são exatamente iguais (i = j).</p>
  <p>O código pede ao usuário o tamanho da matriz que deseja caminhar e a preenche com números aleátorios de 0 a 99. A lógica do programa se resume em procurar o maior caminho possível seguindo o seguinte padrão: começa-se no primeiro elemento, compara-se então, os próximos elementos — neste caso o da direita e abaixo, visto que não existem elementos na esquerda —, o que mostrar o maior número inteiro, deverá ser o próximo passo na matriz.</p>
  </p>Para fazer essa comparação o programa usa blocos de 'ifs', dentro de um loop, com condições que comparam os próximos elementos, dentro destes há o incremento na posição resultante da comparação, um print que mostra qual direção moveu-se, uma exclusão do elemento anterior e um print da matriz atual, depois do movimento.</p>
  <p>Há também tratamentos de erros para condições específicas, como por exemplo, na primeira coluna (j==0) não é possível mover-se pra esquerda, e na última (j==n) para a direita.</p>