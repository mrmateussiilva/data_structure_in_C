#!/usr/bin/env python3





class Pilha:
	def __init__(self):
		self.items: list[int] = []
	
	def push(self,value:int) -> str | None:
		if len(self.items) == 0:
			self.items.append(value)
			return 
		self.items.insert(len(self.items),value) 
	
	def pop(self) -> None  | int:
		if len(self.items) == 0:
			print("A Pilha está vazia, não é possivel remover")
			return 
		value = self.items[len(self.items)-1]
		del self.items[len(self.items)-1]	
		return value
	
	def show(self) -> None:
		if len(self.items) == 0:
			print("A Pilha está vazia")
			return 
		for v in self.items:
			print(f"\t{v}")
		print("---")		

	def peek(self) -> int | None:
		if len(self.items) == 0:
			print("A pilha está vazia")


	def __str__(self):
		return f"Pilha de {len(self.items)} elementos"




def preencher(p:Pilha,n:int):
	for v in range(1,n+1):
		p.push(v)



if __name__ == "__main__":
	pilha = Pilha()
	preencher(pilha,10)
	#pilha.show()	
	print(pilha)
	pilha.pop()	
	pilha.pop()	
	pilha.pop()	
	print(pilha.pop())	

	print(pilha)
	
	pilha.show()	







	
	






	 
