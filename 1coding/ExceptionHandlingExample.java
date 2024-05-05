import java.util.Scanner;

public class ExceptionHandlingExample {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter two numbers to divide:");
        try {
            int num1 = scanner.nextInt();
            int num2 = scanner.nextInt();

            int result = divide(num1, num2);
            System.out.println("Result of division: " + result);
        } catch (ArithmeticException e) {
            System.out.println("Error: Division by zero is not allowed.");
        } catch (Exception e) {
            System.out.println("An error occurred: " + e.getMessage());
        } finally {            // Close the scanner to prevent resource leak
            scanner.close();
        }
    }

    public static int divide(int dividend, int divisor) {
        return dividend / divisor;
    }
}
