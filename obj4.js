class Animal{
    makeSound() {
        return "Some generic sound";
    }
}

class Dog extends Animal {   //재정의
    makeSound() {
        return "Woof!";
    }
}

class Cat extends Animal {
    makeSound() {
        return "Meow!";
    }
}

class Lion extends Animal{
    makeFace() {
        return "Waaaaaaoong!";
    }
}


const animals = [new Dog(), new Cat(), new Animal(), new Lion()];
animals.forEach(animal => {
    console.log(animal.makeSound());
    console.log(animal.makeFace());
});

//Output:
// Woof!
// Meow!
// Some generic sound

//이렇게 바꾸라고 함..
animals.forEach(animal => {
    console.log(animal.makeSound());
    
    // makeFace 메서드가 존재하는 경우에만 호출
    if (typeof animal.makeFace === 'function') {
        console.log(animal.makeFace());
    } else {
        console.log("This animal doesn't have a makeFace method.");
    }
});
