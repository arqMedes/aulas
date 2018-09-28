# aulas
Neste repositorio esta as aulas desenvolividas em sala nas seguintes disciplinas:
- CAD
- Instalações Elétricas
- Python

Resolver 27/09 Procura por número amigo (++++)
d = 5.03501
n = int (d)
pD = d - n
pD = float ('{0:.{1}f}'.format(pD, 9))
num = n
den = 1
num1 = pD
while (not pD == 0):
    den *= 10
    pD *= 10
    n = int (pD)
    pD = pD - n
    pD = float ('{0:.{1}f}'.format(pD, 9))
num1 = int(den*num1)
num *= den
num += num1
print ("Fração: %d / %d" %(num, den))
