# Análise de dados com Pandas

### Python e análise de dados
A simplicidade do Python é uma característica que o faz tão atraente para desenvolvedores. E ela tem sido ótima para preparação de dados. Contudo, apesar de todo o seu poder, sua criptonita é (era… Spoiler) a análise de dados. Os analistas precisavam migrar para outra linguagem que favorecia isso, o R por exemplo.
``` python
# Mostrando os valores, sem preparar os índices
notas = [2,7,5,10,6]
print("Valores:", notas)
# Para trabalhar com índices, é preciso usar o conceito de discionário, além disso o acesso a uma chave que nos interessa depende do índice do discionário.
notas = [{"Wilfred":2, "Abbie":7, "Harry":5, "Julia":10, "Carrie":6}]
print("Harry: {}".format(notas[0]["Harry"]))
# Para tirar uma média de todas as notas
m = 0
for i in notas[0]:
    m += notas[0][i]

print("Média: {}".format(m/len(notas[0])))
```

### O que é Pandas?
Pandas é uma biblioteca open source que fornece estruturas de dados de alto desempenho e fáceis de usar, assim como ferramentas de análise de dados para a linguagem de programação Python. O Kung Fu (trabalho duro) fica com o Pandas você só tem que saber o que quer fazer. E este é o propósito desse curso, te introduzir no mundo da análise de dados com conceitos básicos.

``` python
import pandas as pd
notas = pd.Series([2,7,5,10,6])
print("Valores: ", notas.values)
notas = pd.Series([2,7,5,10,6], index=["Wilfred", "Abbie", "Harry", "Julia", "Carrie"])
print('Harry:', notas["Harry"])
print("Média:", notas.mean())
```

### Estrutura de dados base do Pandas
* Series - Uma Series é como um array unidimensional, uma lista de valores. Toda Series possui um índice, o index, que dá rótulos a cada elemento da lista. 
``` python
print("Notas index:", notas.index)
print("Desvio padrão:", notas.std())
# Geralmente para resumir brevemente as estatísticas dos dados se usa o .describe()
print(notas.describe())
import numpy as np
# Quadrado
print(notas**2)
# Logarítmo
print(np.log(notas))
```
* Data Frame - Já um DataFrame é uma estrutura bidimensional de dados, como uma planilha.
``` python
df = pd.DataFrame({'Aluno' : ["Wilfred", "Abbie", "Harry", "Julia", "Carrie"],
                   'Faltas' : [3,4,2,1,4],
                   'Prova' : [2,7,5,10,6],
                   'Seminário': [8.5,7.5,9.0,7.5,8.0]})
print(df)
# Tipos de objetos
print(df.dtypes)
# Ver as colunas
print(df.columns)
# Acessando os valores
print(df["Seminário"])

print(df.describe())
# Ordenando
print(df.sort_values(by="Seminário"))
# Localizando dados pelo índice, existem várias outras formas de fazer isso
print(df.loc[3])
# Boolean Indexing
print(df[df["Seminário"] > 8.0])
# bitwise (&, |, ~)
print(df[(df["Seminário"] > 8.0) & (df["Prova"] > 3)])
```

### Tipos de entrada de dados usados

* Com CSV: **pd.read_csv()**
``` python
# 5 primeiros
print(df.head())
# 10 primeiros
print(df.head(n=10))
# 5 últimos
print(df.tail())
# valores únicos
print(df["bairro"].unique())
# quantidades
print(df["bairro"].value_counts())
# percentual
print(df["bairro"].value_counts(normalize=True))
# groupby: agrupa as ocorrências
print(df.groupby("bairro").mean())
print(df.groupby("bairro").mean()["pm2"].sort_values())
# usando funções
def truncar(bairro):
    return bairro[:3]
print(df["bairro"].apply(truncar))
# lambda
print(df["bairro"].apply(lambda x: x[:3]))
# NaN
print(df2 = df.head())
print(df2 = df2.replace({"pm2": {12031.25: np.nan}}))
print(df2.dropna())
print(df2.fillna(99))
print(df2.isna())
```

* Com HTML: **pd.read_html()**
  * Bibliotecas
    1. Requests
    2. BeautifulSoup
    3. Seaborn (Visualização Estatística)