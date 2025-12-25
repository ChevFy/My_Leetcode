dict_score ={}
def calculate(dictionary,layer1) :
    total = 0
    for i in dictionary[layer1].values() :
        total += i
        # print(total)
        # print(len(dictionary))
    avg = total/len(dictionary[layer1])
    avg = f"{avg:.2f}"
    # dict_score = {
    #     layer1 : str(avg)
    # }
    dict_score[layer1] =str(avg)
    return dict_score

def add_score(dictionary,layer1,layer2,info,Already_ID,Finish) :
    try :
        info = int(info)
    except :
        info = float(info)
    if(Already_ID) :
        dictionary[layer1][layer2] = info
    else :
        dictionary[layer1] = {
            layer2 : info
        }
    # print(dictionary)
    First = True
    
    total = calculate(dictionary,layer1)
    if First :
        string = f"{total}"
        First = False
    if not Finish :
        string += f"{total}"
    # dict += total
    # print(dict)
    if Finish :
        string += f"{total}"
        # print(f"{dictionary}, Average score: {total}")
        print(f"{dictionary}, Average score: {total}")

def main() :
	try :
		data = input("Input : ").split('|')
		
		if len(data) < 4 :
			return print("Invalid")

		j=0
		for i in data :
			data[j] = i.strip().strip("'")
			j += 1

		if not data[1].isdigit() :
			return print("Invalid")
		if (float(data[3]) < 0 or float(data[3]) > 100) or data[3].isalpha() :
			return print("Invalid")
		if len(data[2]) == 0 :
			return print("Invalid")

		print(data[0])
		dictionary = eval(data[0])
		count = 0
  
  
		# ทีหลังทำเป็น function นะ 
		Already_ID = False
		for i in range(1,len(data)) :
			if i % 3 == 1 :
				for j in dictionary.keys() :
					if j == data[i] :
						Already_ID = True
						if Already_ID and i == len(data)-3 :
							break
					else :
						Already_ID = False
			elif i % 3 == 2 :
				pass
			elif i % 3 == 0 :
				if(i != len(data)-1) :
					Finish = False
				else :
					Finish = True
				add_score(dictionary,data[1+count],data[2+count],data[3+count],Already_ID,Finish)
				count += 3
	except :
		print("Invalid")

main()