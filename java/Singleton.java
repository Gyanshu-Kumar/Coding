public class Singleton {
    // 1. Private constructor
    private Singleton() {
    }

    // 2. Static inner class to hold the Singleton instance
    private static class SingletonHolder {
        // 3. Private static final instance of Singleton
        private static final Singleton INSTANCE = new Singleton();
    }

    // 4. Public method to access the Singleton instance
    public static Singleton getInstance() {
        return SingletonHolder.INSTANCE;
    }

    // 5. Public method to demonstrate functionality
    public void showMessage() {
        System.out.println("Hello, I am a Singleton!");
    }

    public static void main(String[] args) {
        // 6. Use the getInstance() method to get the Singleton instance
        Singleton singleton1 = Singleton.getInstance();
        Singleton singleton2 = Singleton.getInstance();

        // 7. Check if both references point to the same instance
        System.out.println(singleton1 == singleton2);

        // 8. Call the showMessage() method
        singleton1.showMessage();
    }
}
