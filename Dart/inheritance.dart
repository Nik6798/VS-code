class livingbeings{
  var species;
  var smartness;
livingbeings(this.species,this.smartness);

showout(){
    print(species);
  print(smartness);
}

}

class human extends livingbeings {
  var aquatic_nonaquatic;
  human(var species,var smartness,this.aquatic_nonaquatic):super(species,smartness);
  showout(){
    super.showout();
    print(aquatic_nonaquatic);
  }
}
main(List<String> args) {
 human n=human('homosapions', 9.5, false);
 n.showout();
}
