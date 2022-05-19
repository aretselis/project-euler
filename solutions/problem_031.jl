coins = [1, 2, 5, 10, 20, 50, 100, 200]
target_number = 200
number_of_coins = length(coins)
solution_table = zeros(target_number + 1)
solution_table[1] = 1

for i in coins
    for j=i+1:target_number+1
        solution_table[j] += solution_table[j - i]
    end
end

result = solution_table[target_number + 1]
println(result)