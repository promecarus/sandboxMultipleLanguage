var Person = function (firstAndLast) {
    let fullName = firstAndLast;

    this.getFirstName = () => fullName.split(" ")[0];

    this.getLastName = () => fullName.split(" ")[1];

    this.getFullName = () => fullName;

    this.setFirstName = (name) => (fullName = name + " " + fullName.split(" ")[1]);

    this.setLastName = (name) => (fullName = fullName.split(" ")[0] + " " + name);

    this.setFullName = (name) => (fullName = name);
};

var bob = new Person("Bob Ross");
bob.getFullName();
