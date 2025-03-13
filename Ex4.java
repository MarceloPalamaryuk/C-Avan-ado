public class Ex4 {
    //constantes globais
    public static void main (String[] args) {
        int eImpar = 0;
        int[][] myNums = { {1,1,1,1,1}, {5,5,5,5,5}, {3,3,3,3}, {4,4,4,4} };
        int elements = myNums[0].length;
        int parar = myNums[0].length/2;
        if (elements == (elements/2)*2) {
            eImpar = 0;
        }
        
        if (eImpar == 0) {
            for (int i=0;i<elements;i++) {
                for (int j=0;j<elements;j++) {
                    int num1 = myNums[i][j];
                    int num2 = myNums[elements-i-1][elements-j-1];
                    System.out.println(num1 + num2);
                }
                System.out.print("\n");
                if (i+1 == parar) break;
            }
        } else {
            for (int i=0;i<elements;i++) {
                for (int j=0;j<elements;j++) {
                    int num1 = myNums[i][j];
                    int num2 = myNums[elements-i-1][elements-j-1];
                    System.out.println(num1 + num2);
                }
                System.out.print("\n");
            }
        }
    }
}