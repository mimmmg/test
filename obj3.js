class Animal{
    constructor(name) {
        this.name = name;
    }

    move() {
        console.log(`${this.name} is moving`);
    }
}

class Bird extends Animal {
    constructor(name, canFly) {
        super(name);
        this.canFly = canFly;
        }

        fly() {
            if (this.canFly) {
                console.log(`${this.name}is flying`);
            } else {
                console.log(`${this.name} can't fly`); 
        }
    }
}

const eagle = new Bird('Eagle', true);
eagle.move(); // Eagle is moving
eagle.fly(); // Eagle is flying

const penguin = new Bird('Penguin', false);
penguin.move(); // Penguin is moving
penguin.fly(); // Penguin can't fly

// 추가로 다른 예시 넣어서 더 만들어보기~~