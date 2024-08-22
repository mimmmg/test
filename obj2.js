class Person {
    //Private fields (캡슐화)
    #name;
    #age;

    constructor(name, age) {
        this.#name = name;
        this.#age = age;
    }

    //Public method to access private fields
    getNames(){
        return this.#name;
    }

    getAge() {
        return this.#age;
    }

    // Public method to modify private fields
    setName(name) {
        this.#name = name;
    }

    setAge(age) {
        if (age > 0) {
            this.#age = age;
        } else {
            console.log('Invalid age');
        }
    }
}

export const person = new Person('John', 30);
console.log(person.getNames()); // John
person.setAge(35);
const person2 = new Person('Bob', 27);
console.log(person2.getNames());
person2.setAge(27);
console.log(person2.getAge());