main(List<String> args) {
  List names=['java','dart'];
  var name=names;//by doing this the name list copy the address of existing names list
  //the name and names are pointing to the same data
  //so to cloninig a list we have to use this [...nameofthelist ]
  for(var a in names){
    print(a);
  }
  for(var a in name){
    print("val of list $a");
  }

  var li=['str','dds'];
  print(li[1]);
  print(li.length);

  li[1]='change is possible';
  print(li);

  List <String> newli=const['nikhil','roll'];
  print(newli);
  //after putting const the list can't be changed
}