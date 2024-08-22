const { person } = require("./obj2");

class Animal {
    constructor(name) {
        if (this.constructor === Animal) {
            throw new Error("Cannot instantiate abstract class Animal");
        }
        this.name = name;
    }

    //Abstract method
    makeSound() {
        throw new Error("Abstract method 'makeSound' must be implemented");
    }
}

class Dog extends Animal {
    constructor(name) {
        super(name);
    }
    makeSound() {
        return "Woof!";
    }
}

const dog = new Dog('Buddy');
console.log(dog.makeSound());console.log(person.getAge()); //35 
 //Woof!