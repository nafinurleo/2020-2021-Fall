import java.lang.*;

public class Queue{
	public int queue[]=new int[10];
	public int front=-1;
	public int rear=-1;
	public int maxsize=10;
	
	Queue(){
		System.out.println("Queue");
	}
	
	public boolean isEmpty(){
		if ((front == -1) && (rear == -1)){
			return true;
		}
		
		else{
			return false;
		}
	}
	
	public boolean isFull(){
		if (rear == maxsize-1){
			return true;
		}
		
		else{
			return false;
		}
	}
	
	public boolean enqueue(int Element){
		if(isFull()){
			System.out.println("Queue is Full");
        return false;
		}
		else if(isEmpty()){
			front = rear = 0;
			queue[rear] = Element;
			System.out.println("Value inserted: "+ Element);
        return true;
		}
		else{
			rear++;
			queue[rear] = Element;
			System.out.println("Value inserted: "+ Element);
        return true;
		}
	}
	
	public boolean dequeue(){
		if(isEmpty()){
			System.out.println("Queue is empty! Dequeue not possible\n");
			return false;
			}

		else if (front == rear){
			front = rear = -1;
			System.out.println("Dequeue operation is performed successfully.\n");
			return true;
			}

		else{
			front++;
			System.out.println("Dequeue operation is performed successfully.\n");
			return true;
			}
		}

	public int frontElement(){
		return queue[front];
	}
	
	public void show(){
		 if(isEmpty()){
			System.out.println("Cannot show queue because it is empty");
		  }

		for(int i = front; i <= rear; i++){
			System.out.println(queue[i]);
			}
	}
}


