H, W = map(int, input().split())

min_diff = float('inf')
for h in range(1, H):
    area1 = h * W

    w = W // 2
    area2 = (H - h) * w
    area3 = (H - h) * (W - w)

    diff1 = max(area1, area2, area3) - min(area1, area2, area3)

    h2 = (H - h) // 2
    area4 = (H - h - h2) * W
    area5 = h2 * W
    diff2 = max(area1, area4, area5) - min(area1, area4, area5)

    min_diff = min(min_diff, min(diff1, diff2))

for w in range(1, W):
    area1 = w * H

    h = H // 2
    area2 = (W - w) * h
    area3 = (W - w) * (H - h)

    diff1 = max(area1, area2, area3) - min(area1, area2, area3)

    w2 = (W - w) // 2
    area4 = (W - w - w2) * H
    area5 = w2 * H
    diff2 = max(area1, area4, area5) - min(area1, area4, area5)

    min_diff = min(min_diff, min(diff1, diff2))

print(min_diff)

