# coding: utf-8
require './longNumb.so'

usage = "Usage: (ruby) (main.rb) (input_file_1) (operand +,-,\"*\",/,^,%) (input_file_2) (output_file) "
usage1= " \n[-b] [ [-mod module_file_name]]"
usage3= " \n[-b] : Optional key. If set, then data will read from binary files"
usage4= " \n[-mod] (modulus_file_name): Optional key. If set, then \"^\" operation will used with modulus"
usage5= " \n(modulus_file_name) is required parametr, if set key [-mod]\n\n"

if ARGV.length()==1 and ARGV[0]=="--help"
puts usage
puts usage1
puts usage3
puts usage4
puts usage5
exit 0
end


if ARGV[1].length() != 1
puts "Error: unknown operand"
exit 1
end

	path1 = ARGV[0]
	path2 = ARGV[2]
	result = ARGV[3]
	operation = ARGV[1]
	mod =""
	base = 10
	
if ARGV.length()==5
	if ARGV[4] == "-b"
		base = 256
	else mod = ARGV[4]
	end
end

if ARGV.length()==6
	
	base = 256
	mod = ARGV[5]	

end
	a = LongNumb::LongNumb.new()
	b = LongNumb::LongNumb.new()
	a.Read(path1,base)
	b.Read(path2,base)
	c = LongNumb::LongNumb.new()

	if ARGV[1]=="+"
	c=a+b
	elsif ARGV[1]=="-"
	c=a-b
	elsif ARGV[1]=="*"
	c=a*b
	elsif ARGV[1]=="/"
	c=a/b
	elsif ARGV[1]=="^"
	c=a^b
	elsif ARGV[1]=="%"
	c=a%b
	end
	
	if mod != ""
	m = LongNumb::LongNumb.new()
	m.Read(mod,base)
	c = c%m
	end

	c.Write(result)
	
	
	





