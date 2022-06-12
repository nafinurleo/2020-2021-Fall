public class Start{

public static void main(String[] args){
	
	Stack s=new Stack();
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);

	System.out.println(s.topElement());
	s.pop();

	System.out.println(s.topElement());
	s.pop();

	System.out.println(s.topElement());
	s.pop();

	System.out.println(s.topElement());
	s.pop();

	System.out.println(s.topElement());
	s.pop();

	System.out.println(s.topElement());
	s.pop();

	System.out.println(s.topElement());
	s.pop();

	System.out.println(s.topElement());
	s.pop();
	}

}