def calculate_scientific_points(cards):
    card_count = {'T': 0, 'C': 0, 'G': 0}

    for card in cards:
        card_count[card] += 1

    total_points = 0

    for card_type in card_count:
        count = card_count[card_type]
        total_points += count ** 2

    min_count = min(card_count.values())
    bonus_points = min_count * 7

    total_points += bonus_points

    return total_points

input_string = input().strip()
result = calculate_scientific_points(input_string)
print(result)

