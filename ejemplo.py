# Traductor Ada -> Python
Total = 0  # Declaraci├│n m├║ltiple
X = 0  # Declaraci├│n m├║ltiple
Y = 0  # Declaraci├│n m├║ltiple
Z = 0  # Declaraci├│n m├║ltiple
# Declaraci├│n m├║ltiple: N, ... : Integer
N = 0
# Declaraci├│n: Max_Total : Integer
Max_Total = 0
I = 0  # Declaraci├│n m├║ltiple
# Declaraci├│n m├║ltiple: Ans, ... : Integer
Ans = 0
Y_Pow = 0  # Declaraci├│n m├║ltiple
Z_Pow = 0  # Declaraci├│n m├║ltiple
# Declaraci├│n m├║ltiple: X_Pow, ... : Integer
X_Pow = 0
# Declaraci├│n: Encontrado : Boolean
Encontrado = False
#!/usr/bin/env python3
# C├│digo generado autom├íticamente desde Ada

def main():
    N = 3
    Max_Total = 10
    Total = 3
    Encontrado = False
    print("Buscando tripletas de Fermat")
    while Total <= Max_Total:
        X = 1
        while X <= Total - 2:
            Y = 1
            while Y <= Total - X - 1:
                Z = Total - X - Y
                Ans = 1
                I = 1
                while I <= N:
                    Ans = Ans * X
                    I = I + 1
                X_Pow = Ans
                Ans = 1
                I = 1
                while I <= N:
                    Ans = Ans * Y
                    I = I + 1
                Y_Pow = Ans
                Ans = 1
                I = 1
                while I <= N:
                    Ans = Ans * Z
                    I = I + 1
                Z_Pow = Ans
                if X_Pow + Y_Pow == Z_Pow:
                    print("Soluci??n encontrada:")
                    print("X = ", end='')
                    print(X, end='')
                    New_Line()  # Llamada a procedimiento
                    print("Y = ", end='')
                    print(Y, end='')
                    New_Line()  # Llamada a procedimiento
                    print("Z = ", end='')
                    print(Z, end='')
                    New_Line()  # Llamada a procedimiento
                    Encontrado = True
                Y = Y + 1
            X = X + 1
        Total = Total + 1
    if Encontrado:
        print("Proceso completado con ??xito")
    else:
        print("No se encontraron soluciones")

if __name__ == "__main__":
    main()
