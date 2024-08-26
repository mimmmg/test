//인터페이스는 구현할수 있어서 implement 쓴다!!

//첫번째 인터페이스
interface Flyable {
    void fly();
}

// 두번째 인터페이스
interface Swimmable {
    void swim();
}

//Flyable과 Swimmable 인터페이스를 모두 구현하는 클래스 - 다중상속 구현가능','사용해서
class Duck implements Flyable, Swimmable {
    @Override
    public void fly() {
        System.out.printIn("Duck is flying.");
    }

    @Override
    public void swim() {
        System.out.printIn("Duck is swimming.");
    }
}

public class Main {
    public static void main(String[] args) {
        Duck duck = new Duck();
        duck.fly();    //출력: Duck is flying.
        duck.swim();    //출력: Duck is swimming.
    }
}