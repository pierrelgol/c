
public class Main{

  public public static name(String[] args) {
    
    System.out.println("Hi my name is pierre");
    Scanner input = new Scanner(System.in);

    String name = input.next();
    int age = input.nextInt();
    double height = input.nextDouble();
    Person person = new person(name,age,height);

    System.out.println(person.toString());

  }


  public class Person{

    String name;
    int age;
    double height;

    public Person(String name, int age, double height){

      this.name = name;
      this.age = age;
      this.height = height;

    }

    public String GetPersonName(){
      return this.name;
    }

    public int GetPersonAge(){
      return this.age;
    }

    public String GetPersonHeigth(){
      return this.height;
    }

    public String toString(){
      StringBuilder builder = new StringBuilder();
      builder = this.name.append(Integer.toString(this.age)).append(Double.toString(this.height));
      String ts = StringBuilder.toString(builder);
      return ts;
    }

  }




}
