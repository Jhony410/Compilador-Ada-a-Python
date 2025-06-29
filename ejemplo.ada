procedure Fermat is
    N, Total, X, Y, Z : Integer;
    Max_Total : Integer;
    Ans, I : Integer;
    X_Pow, Y_Pow, Z_Pow : Integer;
    Encontrado : Boolean;
begin
    N := 3;
    Max_Total := 10;
    Total := 3;
    Encontrado := False;

    Put_Line("Buscando tripletas de Fermat");

    while Total <= Max_Total loop
        X := 1;
        while X <= Total - 2 loop
            Y := 1;
            while Y <= Total - X - 1 loop
                Z := Total - X - Y;

                -- Cálculo de X_Pow
                Ans := 1;
                I := 1;
                while I <= N loop
                    Ans := Ans * X;
                    I := I + 1;
                end loop;
                X_Pow := Ans;

                -- Cálculo de Y_Pow
                Ans := 1;
                I := 1;
                while I <= N loop
                    Ans := Ans * Y;
                    I := I + 1;
                end loop;
                Y_Pow := Ans;

                -- Cálculo de Z_Pow
                Ans := 1;
                I := 1;
                while I <= N loop
                    Ans := Ans * Z;
                    I := I + 1;
                end loop;
                Z_Pow := Ans;

                -- Verificación
                if X_Pow + Y_Pow = Z_Pow then
                    Put_Line("Solución encontrada:");

                    Put("X = ");
                    Put(X);
                    New_Line;

                    Put("Y = ");
                    Put(Y);
                    New_Line;

                    Put("Z = ");
                    Put(Z);
                    New_Line;

                    Encontrado := True;
                end if;

                Y := Y + 1;
            end loop;
            X := X + 1;
        end loop;
        Total := Total + 1;
    end loop;

    if Encontrado then
        Put_Line("Proceso completado con éxito");
    else
        Put_Line("No se encontraron soluciones");
    end if;
end Fermat;