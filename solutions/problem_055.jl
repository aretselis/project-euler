function is_palindrome(num)
    number_str = string(num)
    reversed_str = reverse(number_str)
    return number_str == reversed_str
end

function is_lychrel(number)
    # Assuming 50 iterations only
    for i in 1:50
        reversed_number = parse(Int128, reverse(string(number)))
        temp_number = Int128(number + reversed_number)
        if is_palindrome(temp_number)
            return false
        end
        number = temp_number
    end
    return true
end

global lychrel_numbers = 0

for j in 1:10000
    if is_lychrel(j)
        global lychrel_numbers += 1
    end
end

print(lychrel_numbers)