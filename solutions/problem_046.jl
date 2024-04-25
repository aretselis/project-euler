function is_prime(number)
    upper_check_limit = isqrt(number)
    for i in 2:upper_check_limit
        if number % i == 0
            return false
        end
    end
    return true
end

function compute_solution()
    found = false
    i = 1
    while(!found)
        i += 1
        if is_prime(i) || i%2==0
            continue
        else
            # Do actual check here
            check = true
            j = 1
            while(check)
                potential_prime = i - 2 * j * j
                if potential_prime < 0
                    return i
                elseif is_prime(potential_prime)
                    break
                end
                j += 1
            end
        end
    end            
end


result = compute_solution()
println("Conjecture disproven, number is ", result)