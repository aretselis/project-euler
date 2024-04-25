function is_prime(number)
    upper_check_limit = isqrt(number)
    for i in 2:upper_check_limit
        if number % i == 0
            return false
        end
    end
    return true
end

function sum_of_primes_up_to(number)
    sum = 2
    for i in 3:2:number
        if is_prime(i)
            sum += i
        end
    end
    return sum
end

desired_number = 2000000
result = sum_of_primes_up_to(desired_number)
println("The sum of primes is ", result)