class Employee {
  int id;
  String name;
  Employee(){
    this.id=1831423;
    this.name='Nikhil';
  } 
  Employee.forien(String name){
    this.id=91;
    this.name=name;
  }

  printout(){
    print("the id is $id and name is $name");
  }
}
main(List<String> args) {
  Employee i=Employee();
  Employee f=Employee.forien("James");
  i.printout();
  f.printout();

}