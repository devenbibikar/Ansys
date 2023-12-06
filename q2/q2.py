class test_class:

	def __init__(self, name):
		self.name = name
		
	#Prints the sum 
	def printItem(self, item):
		print(item)
		
	#Prints the sum of x + y, returns the sum
	def addTwoNumbers(self, x, y): 
		sum = x + y
		print(sum)
		return sum
		
	def readFile(self, filename):
		f = open(filename)
		print(f.read())
	
	#Calculates first n items of fibonacci sequence and returns a list. 
	def fibonacci(self, n):
		if (n == 0):
			return [0]
			
		elif (n == 1):
			return [0, 1]
			
		num1 = 0
		num2 = 1
		new_list = []
			
		for i in range(n - 2):
			sum = num1 + num2
			new_list.append(sum)
			num1, num2 = num2, sum
			
		print(new_list)
		
		return new_list
	
#Run some commands using the new class	
test_obj = test_class("Test 1")
test_obj.fibonacci(10)
test_obj.addTwoNumbers(5, 10)
test_obj.readFile("test.txt")
