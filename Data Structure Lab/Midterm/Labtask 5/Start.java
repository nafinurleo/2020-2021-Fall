public class Start{
	public static void main(String []args){
		Queue q=new Queue();
		
		q.enqueue(1);
		q.enqueue(2);
		q.enqueue(3);
		q.enqueue(4);
		q.enqueue(5);
		q.enqueue(6);
		q.enqueue(7);
		q.enqueue(8);
		q.enqueue(9);
		q.enqueue(10);
		
		System.out.println(q.frontElement());
		q.dequeue();
		System.out.println(q.frontElement());
		q.dequeue();
		System.out.println(q.frontElement());
		q.dequeue();
		System.out.println(q.frontElement());
		q.dequeue();
		System.out.println(q.frontElement());
		q.dequeue();
		System.out.println(q.frontElement());
		q.dequeue();
		System.out.println(q.frontElement());
		q.dequeue();
		System.out.println(q.frontElement());
		q.dequeue();
		System.out.println(q.frontElement());
		q.dequeue();
		System.out.println(q.frontElement());
		q.dequeue();
		
	}
}