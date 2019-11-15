class Physics {
  final String branch1;
static const branch2="thermo";
  Physics(this.branch1);

  showout(){
    print(branch1);
    print(branch2);
  }
}
main(List<String> args) {
  var d=Physics("Relativity");
  d.showout();
}