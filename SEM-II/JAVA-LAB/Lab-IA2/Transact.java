/*
 * Program 1 with all sub questions,
 * as given in Lab Internal Assignment 2 questions.
 */

class UserDefined extends Exception {
    public UserDefined(float amt) {
        System.out.println("Withdrawing Amount is invalid:" + amt);
    }
}

class Account {
    float bal;

    public Account(float bal) {
        if (bal < 500.00f) {
            System.out.println("Insufficient Balance.");
        } else {
            this.bal = bal;
        }
    }

    public void deposit(float bal) {
        this.bal += bal;
        System.out.println("The balance is:" + this.bal);
    }

    public void withdraw(float amt) throws UserDefined {
        if (amt > bal) {
            throw new UserDefined(amt);
        } else {
            bal -= amt;
            System.out.println("The balance is:" + bal);
        }
    }
}

class Transact {
    public static void main(String[] args) {
        Account a = new Account(1000.00f);
        a.deposit(500.00f);
        try {
            a.withdraw(200.00f);
            a.withdraw(2000.00f);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}