public class Stack{
	public int stack[]=new int[10];
	public int maxsize=10;
	public int top=0;
	
    Stack(){
		System.out.println("Stack");
	}
	
	public boolean isEmpty(){
		return (top==0);
	}

	public boolean isFull(){
		return (top==maxsize);
	}

	public boolean push(int Element){
		if(isFull()){
			System.out.println("Stack Is Full");
		}

		stack[top++]=Element;
		System.out.println("Value Inserted : "+Element);
		return true;
	}

	public boolean pop(){
		if(isEmpty()){
			System.out.println("Stack Is Empty");
		}
		top--;
		return true;

	}


	public int topElement(){
		return (stack[top-1]);
	}

	public void show(){
		if(isEmpty()){
			System.out.println("Stack is empty");
		}

		for(int i=top-1;i>0;i--){
			System.out.println(stack[i]);
		}
	}




}