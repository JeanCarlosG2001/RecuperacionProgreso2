//1. Listar los Productos (Se debe contar los productos con las columnas
    void listarProductos(char productos[][3][40], double precio[], int indice[]) {
        printf("Numero\tNombre\tCategoria\tMarca\tPrecio\n");
        for (int i = 0; i < 9; i++) {
            printf("%d\t%s\t%s\t%s\t%.2f\n", indice[i], productos[i][0], productos[i][1], productos[i][2], precio[i]);
        }
    }

//2. Buscar Productos

    //   1.Por Marca (Se debe ingresar la marca a buscar y se debe imprimir todos los productos con esa marca)
        void buscarXMarca(char productos[][3][40], double precio[]) {
            char marca[40];
            printf("Ingrese la marca a buscar Nike, Adidas o Puma: ");
            scanf("%s", marca);
            int encontrado = 0;

            for (int i = 0; i < 9; i++) {
                for(int j = 0; j < 3; j++) {
                    if(productos[i][j][3]==marca) {
                        encontrado = encontrado + 1;
                    }
                }
            }
            printf("se encontro %d \n",encontrado);
            }
    
        
    //   2.Por Categoria (Se debe ingresar la categoria a buscar y se debe imprimir todos los productos con esa categoria)
        void buscarXCategoria(char productos[][3][40], double precio[]) {
        char categoria[40];
        printf("Ingrese la categoria a buscar Zapatos, Chompas o Camisas: ");
        scanf("%s", categoria);

        int encontrado = 0;

        for (int i = 0; i < 9; i++) {
            if (productos[i][2]==categoria) {
                printf("Nombre\tCategoria\tMarca\tPrecio\n");
                printf("%s\t%s\t%s\t%.2f\n", productos[i][0], productos[i][1], productos[i][2], precio[i]);
                encontrado = 1;
            }
        }

        printf("se encontro %d \n",encontrado);
}   
  
    //   3.Por precio menor de: (Ingresar el precio limite, se debe imprimir todos los productos con precio menor al ingresado)
        void buscarXPrecioMenor(char productos[][3][40], double precio[]) {
            int limite;
            printf("Ingrese el precio limite: ");
            scanf("%d", &limite);  
            int encontrado = 0;

            for (int i = 0; i < 9; i++) {
                if (precio[i] < limite){
                    encontrado = 1;
                }
            }
            printf("se encontro %d \n",encontrado);
}

