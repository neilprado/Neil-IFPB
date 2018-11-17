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