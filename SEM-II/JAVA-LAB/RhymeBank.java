import java.util.Scanner;

public class RhymeBank {
    static boolean validate(int ind,int size){
        if(ind>size){
            System.out.println("Invalid account ID");
            return false;
        }
        else
            return true;
    }
    public static void main(String[] args) {
        double[] accountBalance=new double[250];
        String[] accountNames=new String[250];
        int ind,size=0;//ind=index,size=used to increment while entering account name and bal.
        Scanner scan=new Scanner(System.in);
        System.out.println("Bank OPERATION");
        while(true){
            System.out.println("1. Enter Info");
            System.out.println("2. View account info");
            System.out.println("3. Change account name.");
            System.out.println("4. Modify Balance");
            System.out.println("5. Total Money in bank.");
            System.out.println("-1 to exit");
            int userinput=scan.nextInt();
            if(userinput==1){
                System.out.println("Enter account name:");
                accountNames[size]=scan.next();
                System.out.println("Enter opening balance:");
                accountBalance[size++]=scan.nextDouble();
                System.out.println("Information Entered.");
            }
            else if(userinput==2){
                System.out.println("Enter account ID:");
                ind=scan.nextInt();
                if(validate(ind, size)){
                    System.out.println("Account Name:"+accountNames[ind-1]);
                    System.out.println("Account Balance:"+accountBalance[ind-1]+"/-");
                }
            }
            else if(userinput==3){
                System.out.println("Enter account ID:");
                ind=scan.nextInt();
                if(validate(ind, size)){
                    System.out.println("Enter new Name:");
                    accountNames[ind-1]=scan.next();
                    System.out.println("Name updated");
                }
            }
            else if(userinput==4){
                System.out.println("Enter account ID:");
                ind=scan.nextInt();
                if(validate(ind,size)){
                    System.out.println("Enter updated amount:");
                    accountBalance[ind-1]=scan.nextDouble();
                    System.out.println("Amount updated");
                }
            }
            else if(userinput==5){
                double total=0.0;
                for(int i=0;i<accountBalance.length;i++)
                    total+=accountBalance[i];
                System.out.println("Total amount in bank is:"+total);
            }
            else if(userinput==-1){
                System.out.println("Exiting");
                break;
            }
            else
                System.out.println("Enter valid input");
        }
        scan.close();
    }
}