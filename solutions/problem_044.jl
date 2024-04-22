function compute_pentagonal_number(n)
    pentagonal_number = n*(3n-1)/2
    return pentagonal_number
end

function is_pentagonal(number)
    return isinteger((sqrt(24*number+1)+1)/6)
end

global minimum_distance = NaN
for i in 1:10000000000
    pentagonal_i = compute_pentagonal_number(i)
    if pentagonal_i - compute_pentagonal_number(i-1) >= minimum_distance
        break
    end
    for j in i:-1:1
        pentagonal_j = compute_pentagonal_number(j)
        difference = pentagonal_i - pentagonal_j
        if difference >= minimum_distance
            break
        end
        if is_pentagonal(pentagonal_i+compute_pentagonal_number(j)) && is_pentagonal(difference)
            println("Candidate found, D= ", difference)
            global minimum_distance = abs(pentagonal_i-compute_pentagonal_number(j))
        end
    end
end

