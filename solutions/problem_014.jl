function even_case(number)
    return number/2
end

function odd_case(number)
    return 3*number + 1
end

function compute_largest_collatz_sequence(number_up_to)
    max_sequence_length = 0
    max_sequence_number = 0
    for i in 1:number_up_to
        current_sequence_length = 1
        current_number = i
        while(current_number != 1)
            if current_number % 2 == 0
                current_number = even_case(current_number)
            else
                current_number = odd_case(current_number)
            end
            current_sequence_length += 1
        end
        if current_sequence_length > max_sequence_length
            max_sequence_length = current_sequence_length
            max_sequence_number = i
        end
    end
    return max_sequence_number
end

n = 1000000
result = compute_largest_collatz_sequence(n)
println("The number that generates the longest Collatz chain is: ", result)
