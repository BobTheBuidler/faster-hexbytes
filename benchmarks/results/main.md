#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.6904068833624342e-05 | 2.470486862676236e-05 | 8.17% | 8.90% | 1.09x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.678584266963268e-05 | 2.50129803357203e-05 | 6.62% | 7.09% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.6776983024529144e-05 | 2.4748691977310912e-05 | 7.57% | 8.20% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.7450405372722182e-05 | 2.481391846397717e-05 | 9.60% | 10.63% | 1.11x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.677871233798083e-05 | 2.4946572394313443e-05 | 6.84% | 7.34% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.6703467415517046e-05 | 2.4853407066331883e-05 | 6.93% | 7.44% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.6825521710768768e-05 | 2.5175552697173807e-05 | 6.15% | 6.55% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.6955390072306146e-05 | 2.5405981150932382e-05 | 5.75% | 6.10% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.665977596834522e-05 | 2.5031970119661525e-05 | 6.11% | 6.50% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.6935233074230708e-05 | 2.4608133188931874e-05 | 8.64% | 9.46% | 1.09x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.708698158421658e-05 | 2.5167245112224786e-05 | 7.09% | 7.63% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.663239905159197e-05 | 2.5178836547926493e-05 | 5.46% | 5.77% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.6824000469531517e-05 | 2.4911216013456318e-05 | 7.13% | 7.68% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.687382149162679e-05 | 2.48359323701586e-05 | 7.58% | 8.21% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.675695366161112e-05 | 2.532596223048142e-05 | 5.35% | 5.65% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.6997376323203403e-05 | 2.5698751699258158e-05 | 4.81% | 5.05% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.6914000742231448e-05 | 2.488073164663253e-05 | 7.55% | 8.17% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.707004572850767e-05 | 2.5774619772263185e-05 | 4.79% | 5.03% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.692619480889374e-05 | 2.525618450048162e-05 | 6.20% | 6.61% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.689165195168457e-05 | 2.4870160880848463e-05 | 7.52% | 8.13% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.7052079540147978e-05 | 2.4142075645552004e-05 | 10.76% | 12.05% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.6786281939610968e-05 | 2.4906955187815035e-05 | 7.02% | 7.55% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.6746623361706154e-05 | 2.4216993034269872e-05 | 9.46% | 10.45% | 1.10x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.7089387051452013e-05 | 2.498065345380469e-05 | 7.78% | 8.44% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.6651323986153247e-05 | 2.4779648917397377e-05 | 7.02% | 7.55% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.6863833446134437e-05 | 2.5015358300633775e-05 | 6.88% | 7.39% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.6200995355941884e-05 | 2.4618224119913492e-05 | 6.04% | 6.43% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.616922367028478e-05 | 2.4392370115546704e-05 | 6.79% | 7.28% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.6191657837308156e-05 | 2.4201624881863645e-05 | 7.60% | 8.22% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.6199211960901407e-05 | 2.428300747383521e-05 | 7.31% | 7.89% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.6194570907020867e-05 | 2.4033307137410237e-05 | 8.25% | 8.99% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.6084882763862212e-05 | 2.4675295430897126e-05 | 5.40% | 5.71% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.6060276695025732e-05 | 2.38176463641473e-05 | 8.61% | 9.42% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.6180981964267847e-05 | 2.4680175705990157e-05 | 5.73% | 6.08% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.62699954997883e-05 | 2.4252359795474566e-05 | 7.68% | 8.32% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.6170592992350744e-05 | 2.4348051150792465e-05 | 6.96% | 7.49% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.6374137711970888e-05 | 2.4389519843872823e-05 | 7.52% | 8.14% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.617335467787003e-05 | 2.39797995035627e-05 | 8.38% | 9.15% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.6176609177285484e-05 | 2.434359134989331e-05 | 7.00% | 7.53% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.6167815064748064e-05 | 2.4348690195276082e-05 | 6.95% | 7.47% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.6241135886265597e-05 | 2.4359844011643935e-05 | 7.17% | 7.72% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.640781065646794e-05 | 2.413678568259682e-05 | 8.60% | 9.41% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.6334064263496013e-05 | 2.462916133487641e-05 | 6.47% | 6.92% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.618673022626431e-05 | 2.39671569446388e-05 | 8.48% | 9.26% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.648631005988921e-05 | 2.445603953995682e-05 | 7.67% | 8.30% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.6201475616055927e-05 | 2.4127856224210888e-05 | 7.91% | 8.59% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.613572496729236e-05 | 2.4047103662193987e-05 | 7.99% | 8.69% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.638249592093285e-05 | 2.6770361466048e-05 | -1.47% | -1.45% | 0.99x | ❌ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.621018895784588e-05 | 2.4563098992508857e-05 | 6.28% | 6.71% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.629028687183779e-05 | 2.4566719352197097e-05 | 6.56% | 7.02% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.602213794482961e-05 | 2.4340728123127693e-05 | 6.46% | 6.91% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.6256836438372267e-05 | 2.4453380133909462e-05 | 6.87% | 7.38% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.6190092117769286e-05 | 2.4222295661416664e-05 | 7.51% | 8.12% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.6228851325572456e-05 | 2.4440882778294325e-05 | 6.82% | 7.32% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.6282101240324423e-05 | 2.4519571717801834e-05 | 6.71% | 7.19% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.591534572078571e-05 | 2.4127449236502593e-05 | 6.90% | 7.41% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.613952292224404e-05 | 2.4288931821599928e-05 | 7.08% | 7.62% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.6198619427023853e-05 | 2.4416107212586707e-05 | 6.80% | 7.30% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.6281496566136152e-05 | 2.4569242630497292e-05 | 6.52% | 6.97% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.5995299951701604e-05 | 2.4395359114591196e-05 | 6.15% | 6.56% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.641542341933068e-05 | 2.414006432725253e-05 | 8.61% | 9.43% | 1.09x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.5964307578630033e-05 | 2.4310553136802816e-05 | 6.37% | 6.80% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.6257592615288428e-05 | 2.4445423432636204e-05 | 6.90% | 7.41% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.600758607388823e-05 | 2.4253331618748083e-05 | 6.75% | 7.23% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.6420100750720176e-05 | 2.4368887331596025e-05 | 7.76% | 8.42% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.602241303695949e-05 | 2.4252060892989477e-05 | 6.80% | 7.30% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.626536738687343e-05 | 2.4765794519177088e-05 | 5.71% | 6.06% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.611261594652772e-05 | 2.447857987555864e-05 | 6.26% | 6.68% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.6103317429268953e-05 | 2.4352505899520504e-05 | 6.71% | 7.19% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.6361461929518068e-05 | 2.4800391503634612e-05 | 5.92% | 6.29% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.5976950665234475e-05 | 2.451158092771236e-05 | 5.64% | 5.98% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.6328341659315093e-05 | 2.431318360140466e-05 | 7.65% | 8.29% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.6212954624388022e-05 | 2.417096443964331e-05 | 7.79% | 8.45% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.6176952072258177e-05 | 2.4392545340092867e-05 | 6.82% | 7.32% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.604215802363824e-05 | 2.4211555574444962e-05 | 7.03% | 7.56% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.605389763390402e-05 | 2.407667561076688e-05 | 7.59% | 8.21% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.60566855205589e-05 | 2.421671902154451e-05 | 7.06% | 7.60% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.6031870735016897e-05 | 2.4329450653125928e-05 | 6.54% | 7.00% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.6271334821114664e-05 | 2.431566060577331e-05 | 7.44% | 8.04% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.6068265157266666e-05 | 2.4545154946774337e-05 | 5.84% | 6.21% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.6109662576625357e-05 | 2.437598980087916e-05 | 6.64% | 7.11% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.613707551347907e-05 | 2.4459732741875765e-05 | 6.42% | 6.86% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.6029409246555722e-05 | 2.4427992449820335e-05 | 6.15% | 6.56% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.617990028188493e-05 | 2.4438128886136446e-05 | 6.65% | 7.13% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.603480728595347e-05 | 2.4200548073000777e-05 | 7.05% | 7.58% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.651691027985694e-05 | 2.4185268917165103e-05 | 8.79% | 9.64% | 1.10x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.603272908503399e-05 | 2.402896058758406e-05 | 7.70% | 8.34% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.627705567520954e-05 | 2.4198513346039255e-05 | 7.91% | 8.59% | 1.09x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.634488243531497e-05 | 2.4496544231827827e-05 | 7.02% | 7.55% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.6157163674050354e-05 | 2.4466108973376285e-05 | 6.46% | 6.91% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.6053272929594672e-05 | 2.4271617499445645e-05 | 6.84% | 7.34% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6048216599003855e-05 | 2.440920632141386e-05 | 6.29% | 6.71% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.6077878285458844e-05 | 2.4291933909037172e-05 | 6.85% | 7.35% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.6030616158827353e-05 | 2.4415127622326846e-05 | 6.21% | 6.62% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.6042297827629382e-05 | 2.4323024374361715e-05 | 6.60% | 7.07% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.598862574212933e-05 | 2.4502854812485973e-05 | 5.72% | 6.06% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.5977397328174016e-05 | 2.406210056949748e-05 | 7.37% | 7.96% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.6343304305230464e-05 | 2.441148985349537e-05 | 7.33% | 7.91% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.6726565867422125e-05 | 2.409977212252352e-05 | 9.83% | 10.90% | 1.11x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.6332464294747998e-05 | 2.43155022310268e-05 | 7.66% | 8.29% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.6092154128961757e-05 | 2.4552231634933654e-05 | 5.90% | 6.27% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.604906822169557e-05 | 2.476673450415944e-05 | 4.92% | 5.18% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.6421556605980555e-05 | 2.4376483914757405e-05 | 7.74% | 8.39% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.630197927212666e-05 | 2.4436613669704196e-05 | 7.09% | 7.63% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.626822180553819e-05 | 2.4332660615530012e-05 | 7.37% | 7.95% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.6411668825215478e-05 | 2.4055753437059788e-05 | 8.92% | 9.79% | 1.10x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.614057957521048e-05 | 2.4374428539983312e-05 | 6.76% | 7.25% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.613176672387238e-05 | 2.4957395546503644e-05 | 4.49% | 4.71% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.6068044172089084e-05 | 2.4769508232792974e-05 | 4.98% | 5.24% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.642995895452526e-05 | 2.400811568292704e-05 | 9.16% | 10.09% | 1.10x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.6288343169130326e-05 | 2.465631797206658e-05 | 6.21% | 6.62% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.634509483592929e-05 | 2.4750772204938463e-05 | 6.05% | 6.44% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.6262640020926475e-05 | 2.4664509274162443e-05 | 6.09% | 6.48% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.606370596414007e-05 | 2.4343226289670776e-05 | 6.60% | 7.07% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.609413942033019e-05 | 2.4510838793753263e-05 | 6.07% | 6.46% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.6021268596891497e-05 | 2.7642950941620655e-05 | -6.23% | -5.87% | 0.94x | ❌ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.640819350639266e-05 | 2.4377765048993446e-05 | 7.69% | 8.33% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.6022325704299935e-05 | 2.4187929471137583e-05 | 7.05% | 7.58% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.6109809747627498e-05 | 2.4293298552147274e-05 | 6.96% | 7.48% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.600649872091813e-05 | 2.442059961544767e-05 | 6.10% | 6.49% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.6431566940708347e-05 | 2.353743349058381e-05 | 10.95% | 12.30% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.645451575546861e-05 | 2.447819376465791e-05 | 7.47% | 8.07% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.595918678547062e-05 | 2.453332805732388e-05 | 5.49% | 5.81% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.6097388925969468e-05 | 2.4536321310659815e-05 | 5.98% | 6.36% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.631047195029666e-05 | 2.4705840022013555e-05 | 6.10% | 6.49% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.611458297598358e-05 | 2.4835301150969496e-05 | 4.90% | 5.15% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.6213159663590347e-05 | 2.3865665778458998e-05 | 8.96% | 9.84% | 1.10x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.6249261460825435e-05 | 2.436947567577173e-05 | 7.16% | 7.71% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.6054625837255332e-05 | 2.476768679864922e-05 | 4.94% | 5.20% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.597283617731508e-05 | 2.3824982162997336e-05 | 8.27% | 9.02% | 1.09x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.6146394131545495e-05 | 2.4068484501071513e-05 | 7.95% | 8.63% | 1.09x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.642216129288577e-05 | 2.4736702783137114e-05 | 6.38% | 6.81% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.6185445129499616e-05 | 2.4916846583175456e-05 | 4.84% | 5.09% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.6274271803928492e-05 | 2.4778597097426748e-05 | 5.69% | 6.04% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.6418036816644633e-05 | 2.4819764636392944e-05 | 6.05% | 6.44% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.6092579337380173e-05 | 2.45438569078567e-05 | 5.94% | 6.31% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.6123392470741538e-05 | 2.448454433380304e-05 | 6.27% | 6.69% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.595682099622684e-05 | 2.466124548884411e-05 | 4.99% | 5.25% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.626387142813771e-05 | 2.465695871827962e-05 | 6.12% | 6.52% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6439689345209782e-05 | 2.4304563707089948e-05 | 8.08% | 8.78% | 1.09x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.6177968137302782e-05 | 2.4444924523396796e-05 | 6.62% | 7.09% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.6070571488466867e-05 | 2.4559437500239117e-05 | 5.80% | 6.15% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.594562488146557e-05 | 2.472230878925214e-05 | 4.71% | 4.95% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.5880372806995022e-05 | 2.453950691036631e-05 | 5.18% | 5.46% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.6690950360951072e-05 | 2.4389716466599278e-05 | 8.62% | 9.44% | 1.09x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.625588939154673e-05 | 2.4620752184510303e-05 | 6.23% | 6.64% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.6191200462546008e-05 | 2.4627372662655112e-05 | 5.97% | 6.35% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.623429041047977e-05 | 2.490094286764199e-05 | 5.08% | 5.35% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.643056872738529e-05 | 2.4433281895558e-05 | 7.56% | 8.17% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.629934038011262e-05 | 2.4494240132818252e-05 | 6.86% | 7.37% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.616941371484294e-05 | 2.4756653082709157e-05 | 5.40% | 5.71% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.6000312143293585e-05 | 2.428793484313158e-05 | 6.59% | 7.05% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.6801248119352507e-05 | 2.459556691276692e-05 | 8.23% | 8.97% | 1.09x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.61684226196135e-05 | 2.4336126292557347e-05 | 7.00% | 7.53% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.6163326870044547e-05 | 2.4606014294352497e-05 | 5.95% | 6.33% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.604805213339739e-05 | 2.5017586629946898e-05 | 3.96% | 4.12% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.591378831826112e-05 | 2.44292947472945e-05 | 5.73% | 6.08% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.627330593924983e-05 | 2.459819832979305e-05 | 6.38% | 6.81% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.6086683491453763e-05 | 2.4512751419208728e-05 | 6.03% | 6.42% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.6308623862424407e-05 | 2.4982605734241953e-05 | 5.04% | 5.31% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.6213593567081054e-05 | 2.4710139929955327e-05 | 5.74% | 6.08% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.603215131519855e-05 | 2.46859043543625e-05 | 5.17% | 5.45% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.599756222486004e-05 | 2.517307865100365e-05 | 3.17% | 3.28% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.627541712203566e-05 | 2.4601090721519673e-05 | 6.37% | 6.81% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.603530509883072e-05 | 2.4630201065915785e-05 | 5.40% | 5.70% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.597890642963628e-05 | 2.4402855646621018e-05 | 6.07% | 6.46% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.6051955214559582e-05 | 2.4456141389101955e-05 | 6.13% | 6.53% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.6333836606735362e-05 | 2.4335248245669772e-05 | 7.59% | 8.21% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.6193286478605556e-05 | 2.432884805735377e-05 | 7.12% | 7.66% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.6209372307038846e-05 | 2.4644043380247894e-05 | 5.97% | 6.35% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.6352846567393482e-05 | 2.48674094893132e-05 | 5.64% | 5.97% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.6499461938868347e-05 | 2.453194840904137e-05 | 7.42% | 8.02% | 1.08x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.211053227973656e-05 | 5.526968391326403e-05 | 32.69% | 48.56% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.207520526193358e-05 | 5.570689116755719e-05 | 32.13% | 47.33% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.436520060701193e-05 | 5.4058432725853024e-05 | 35.92% | 56.06% | 1.56x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.157915389137043e-05 | 5.544363165906081e-05 | 32.04% | 47.14% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.193240737267326e-05 | 5.506162902609041e-05 | 32.80% | 48.80% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.159058631613626e-05 | 5.591147664569338e-05 | 31.47% | 45.93% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.821560501612214e-05 | 5.3391228252192284e-05 | 31.74% | 46.50% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.311028770567384e-05 | 5.4824894410712535e-05 | 34.03% | 51.59% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.132885311551153e-05 | 5.480829242363966e-05 | 32.61% | 48.39% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.2646806126306e-05 | 5.743172770273313e-05 | 30.51% | 43.90% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.172918908553788e-05 | 5.4730596675691074e-05 | 33.03% | 49.33% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.179379092343675e-05 | 5.503597333304994e-05 | 32.71% | 48.62% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.2233018781175e-05 | 5.499000161231012e-05 | 33.13% | 49.54% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.20661505786751e-05 | 5.484964148045983e-05 | 33.16% | 49.62% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.36655934826312e-05 | 5.4106313123003824e-05 | 35.33% | 54.63% | 1.55x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.184937538208082e-05 | 5.461515270468018e-05 | 33.27% | 49.87% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.195005395113455e-05 | 5.3859403582534634e-05 | 34.28% | 52.16% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.143101715619508e-05 | 5.4672952117968656e-05 | 32.86% | 48.94% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.128972933206391e-05 | 5.432143439048835e-05 | 33.18% | 49.65% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.30744295900333e-05 | 5.461337423485961e-05 | 34.26% | 52.11% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.210916163109765e-05 | 5.415664694674324e-05 | 34.04% | 51.61% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.205622915071938e-05 | 5.499126110401748e-05 | 32.98% | 49.22% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.110259030572178e-05 | 5.490275222811238e-05 | 32.30% | 47.72% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.182037747787468e-05 | 5.4505242121172796e-05 | 33.38% | 50.11% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.181364112039287e-05 | 5.46558891906768e-05 | 33.19% | 49.69% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.110581900679613e-05 | 5.411402805500337e-05 | 33.28% | 49.88% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.883920616345581e-05 | 5.2106605213698166e-05 | 33.91% | 51.30% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.905520298374575e-05 | 5.312874928572266e-05 | 32.80% | 48.80% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.182476111891064e-05 | 5.48021239241151e-05 | 33.03% | 49.31% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.37049572276743e-05 | 5.544035228674825e-05 | 33.77% | 50.98% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.328620593968723e-05 | 5.576376633635663e-05 | 33.05% | 49.36% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.309134097109196e-05 | 5.67131069654485e-05 | 31.75% | 46.51% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.344499439167397e-05 | 5.557726429723057e-05 | 33.40% | 50.14% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.360551356701683e-05 | 5.649309051675903e-05 | 32.43% | 47.99% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.340044777687445e-05 | 5.6229193071478753e-05 | 32.58% | 48.32% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.97895308216714e-05 | 5.255320953785626e-05 | 34.14% | 51.83% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.402955038515038e-05 | 5.506756256956053e-05 | 34.47% | 52.59% | 1.53x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.360419482139341e-05 | 5.5821744493351875e-05 | 33.23% | 49.77% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.362081147287245e-05 | 5.531818708464392e-05 | 33.85% | 51.16% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.314433717010157e-05 | 5.526690309341107e-05 | 33.53% | 50.44% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.2564156906207e-05 | 5.5976908803611854e-05 | 32.20% | 47.50% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.884860730259801e-05 | 5.459793521620194e-05 | 38.55% | 62.73% | 1.63x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.387921106048546e-05 | 5.515464911243371e-05 | 34.25% | 52.08% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.42030461220326e-05 | 5.591068872403851e-05 | 33.60% | 50.60% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.310017034724305e-05 | 5.5007139088354756e-05 | 33.81% | 51.07% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.30920780925207e-05 | 5.546731667271349e-05 | 33.25% | 49.80% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.381578304006795e-05 | 5.511140512642151e-05 | 34.25% | 52.08% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.253728237346181e-05 | 5.503954313322259e-05 | 33.32% | 49.96% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.355915273969824e-05 | 5.5777629122778915e-05 | 33.25% | 49.81% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.212121293050414e-05 | 5.6679158579023804e-05 | 30.98% | 44.89% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.280710063156002e-05 | 5.566422338554131e-05 | 32.78% | 48.76% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.358717071844487e-05 | 5.608113488375503e-05 | 32.91% | 49.05% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.301179136784106e-05 | 5.5905395105912364e-05 | 32.65% | 48.49% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.35108289991024e-05 | 5.4964140610527885e-05 | 34.18% | 51.94% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.319019314550327e-05 | 5.6579374293357066e-05 | 31.99% | 47.03% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 7.799992983049329e-05 | 5.3657482982186476e-05 | 31.21% | 45.37% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.984228460404096e-05 | 5.432688528119351e-05 | 31.96% | 46.97% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.211668870375514e-05 | 5.701483083368911e-05 | 30.57% | 44.03% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.21049384093502e-05 | 5.721409645461771e-05 | 30.32% | 43.50% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.445197848616749e-05 | 5.7141349621607165e-05 | 32.34% | 47.79% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.294450055178462e-05 | 5.697274330800369e-05 | 31.31% | 45.59% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.265705316891678e-05 | 5.747329265491662e-05 | 30.47% | 43.82% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.266838444636767e-05 | 5.691088824147264e-05 | 31.16% | 45.26% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.328076009117787e-05 | 5.676773386729261e-05 | 31.84% | 46.70% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.924171224922815e-05 | 5.4092083035617515e-05 | 31.74% | 46.49% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.217503879036704e-05 | 5.6681000150404654e-05 | 31.02% | 44.98% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.262087042955922e-05 | 5.718907869184574e-05 | 30.78% | 44.47% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.218777500825049e-05 | 5.595041922190888e-05 | 31.92% | 46.89% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.266479765248326e-05 | 5.6530237942145156e-05 | 31.62% | 46.23% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.161995952198738e-05 | 5.6639733433825606e-05 | 30.61% | 44.10% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.108543376914497e-05 | 5.657520710685421e-05 | 30.23% | 43.32% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.23226884278036e-05 | 5.710249245063826e-05 | 30.64% | 44.17% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.254146377045399e-05 | 5.672129506885276e-05 | 31.28% | 45.52% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.241941663135897e-05 | 5.698639030929986e-05 | 30.86% | 44.63% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.260316395128626e-05 | 5.584745057307014e-05 | 32.39% | 47.91% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.257079082983832e-05 | 5.722437235817646e-05 | 30.70% | 44.29% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.337253016027515e-05 | 5.719131185984279e-05 | 31.40% | 45.78% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.133649474586803e-05 | 5.6624920004594444e-05 | 30.38% | 43.64% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.255681478111305e-05 | 5.702230085680582e-05 | 30.93% | 44.78% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.24166011170746e-05 | 5.682620794249543e-05 | 31.05% | 45.03% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.301092170271864e-05 | 5.65902015028814e-05 | 31.83% | 46.69% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.558044832284072e-05 | 5.666463333316576e-05 | 33.79% | 51.03% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.257642930538762e-05 | 5.738388448717307e-05 | 30.51% | 43.90% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.293287135504916e-05 | 5.676584384221734e-05 | 31.55% | 46.10% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.938726458959259e-05 | 5.405800346390755e-05 | 31.91% | 46.86% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.070802068438856e-05 | 5.379061525652186e-05 | 33.35% | 50.04% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.324993318914837e-05 | 5.66945169719971e-05 | 31.90% | 46.84% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.07647389362398e-05 | 5.469363022294373e-05 | 32.28% | 47.67% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.239432329828316e-05 | 5.4654726535100625e-05 | 33.67% | 50.75% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.174968077096139e-05 | 5.445128963369551e-05 | 33.39% | 50.13% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.525735993231689e-05 | 5.449588556691956e-05 | 36.08% | 56.45% | 1.56x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.580044645416381e-05 | 5.4260457600662426e-05 | 36.76% | 58.13% | 1.58x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.201308495912717e-05 | 5.444091212952971e-05 | 33.62% | 50.65% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.851224179493773e-05 | 5.328604811965095e-05 | 32.13% | 47.34% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.180587785961994e-05 | 5.5954493447598564e-05 | 31.60% | 46.20% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.209075991250789e-05 | 5.527891840970516e-05 | 32.66% | 48.50% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.182504435937689e-05 | 5.3750037266522644e-05 | 34.31% | 52.23% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010677940832704622 | 7.42608959137678e-05 | 30.45% | 43.79% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.79478291116111e-05 | 5.24386448333329e-05 | 32.73% | 48.65% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.151170913218181e-05 | 5.5220021548349324e-05 | 32.26% | 47.61% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.071944612512087e-05 | 5.516677241931634e-05 | 31.66% | 46.32% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.573922474544755e-05 | 5.460442708686815e-05 | 36.31% | 57.02% | 1.57x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.273836139497083e-05 | 5.5874007570493813e-05 | 32.47% | 48.08% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.179883492185566e-05 | 5.583951468867973e-05 | 31.74% | 46.49% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 0.00010168490765112194 | 6.745352553190759e-05 | 33.66% | 50.75% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.905068893711898e-05 | 5.351427608234922e-05 | 32.30% | 47.72% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 0.0001016553413748873 | 6.964050051101857e-05 | 31.49% | 45.97% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.266779953681818e-05 | 5.4864951177860016e-05 | 33.63% | 50.68% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.125878010761795e-05 | 5.732779356891719e-05 | 29.45% | 41.74% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.155414351969897e-05 | 5.411258793547035e-05 | 33.65% | 50.71% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.068087115184986e-05 | 5.484332928882816e-05 | 32.02% | 47.11% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.568065480165384e-05 | 5.4398804122411205e-05 | 36.51% | 57.50% | 1.58x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.172325544739749e-05 | 5.463175419634984e-05 | 33.15% | 49.59% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.897557794070751e-05 | 5.2775272708732273e-05 | 33.18% | 49.65% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.738531291377979e-05 | 5.368105110874478e-05 | 30.63% | 44.16% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.64774490255437e-05 | 5.40180473200664e-05 | 37.54% | 60.09% | 1.60x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.806804646472768e-05 | 5.385889982802766e-05 | 31.01% | 44.95% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.145060987001397e-05 | 5.49688834780341e-05 | 32.51% | 48.18% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.141180054755927e-05 | 5.498883161224643e-05 | 32.46% | 48.05% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.30560907075914e-05 | 5.428417745635231e-05 | 34.64% | 53.00% | 1.53x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.168363354481398e-05 | 5.401534802508902e-05 | 33.87% | 51.22% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.878324238964217e-05 | 5.4026758015121145e-05 | 31.42% | 45.82% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.658216150753767e-05 | 5.2286960618923796e-05 | 31.72% | 46.47% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.881677960953173e-05 | 5.3877053654100374e-05 | 31.64% | 46.29% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.889968108236435e-05 | 5.366739958886987e-05 | 31.98% | 47.02% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 7.938550591061228e-05 | 5.5142075642586475e-05 | 30.54% | 43.97% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010461839614720217 | 7.453532226288034e-05 | 28.76% | 40.36% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 7.910864261933053e-05 | 5.482797927289831e-05 | 30.69% | 44.29% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.893089027139146e-05 | 5.424766746244386e-05 | 31.27% | 45.50% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.835591294228257e-05 | 5.40663102350748e-05 | 31.00% | 44.93% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.892353130556811e-05 | 5.47379245262982e-05 | 30.64% | 44.18% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.916272070350393e-05 | 5.339543613758749e-05 | 32.55% | 48.26% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.871055645501264e-05 | 5.336853598420476e-05 | 32.20% | 47.48% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.943128571486005e-05 | 6.771576634123914e-05 | 31.90% | 46.84% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.942558361695239e-05 | 5.500362213256207e-05 | 30.75% | 44.40% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.822009393948697e-05 | 6.758919261216251e-05 | 31.19% | 45.32% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 7.986340057980041e-05 | 5.340477369881094e-05 | 33.13% | 49.54% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.822109143229268e-05 | 5.2747735060261304e-05 | 32.57% | 48.29% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.829687095992915e-05 | 5.4084735843525794e-05 | 30.92% | 44.77% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.883631930194712e-05 | 5.394933104604894e-05 | 31.57% | 46.13% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.800044066670324e-05 | 5.553015692384986e-05 | 28.81% | 40.47% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.969372285315298e-05 | 5.414273047850928e-05 | 32.06% | 47.19% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.646020938661515e-05 | 5.143335693691906e-05 | 32.73% | 48.66% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.663939496469499e-05 | 5.189978108551412e-05 | 32.28% | 47.67% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.9127946863867e-05 | 5.3386097284025786e-05 | 32.53% | 48.22% | 1.48x | ✅ |
| `hexbytes_new['']` | 7.266921895996254e-05 | 2.897852195511877e-05 | 60.12% | 150.77% | 2.51x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.400279638355318e-05 | 4.409495046424465e-05 | 53.09% | 113.18% | 2.13x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.898527540757061e-05 | 4.429257058846759e-05 | 55.25% | 123.48% | 2.23x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.95493430262751e-05 | 4.169303430559465e-05 | 53.44% | 114.78% | 2.15x | ✅ |
| `hexbytes_new['0x']` | 7.714278975627707e-05 | 2.8796497279392567e-05 | 62.67% | 167.89% | 2.68x | ✅ |
| `hexbytes_new['0x1234']` | 8.679323142925391e-05 | 3.936477159558553e-05 | 54.65% | 120.48% | 2.20x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.730595814181669e-05 | 3.9592944449041214e-05 | 54.65% | 120.51% | 2.21x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.654075322289819e-05 | 3.883912389197526e-05 | 55.12% | 122.82% | 2.23x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.718766663686846e-05 | 3.890968902886576e-05 | 55.37% | 124.08% | 2.24x | ✅ |
| `hexbytes_new['abc']` | 8.392641006117192e-05 | 4.221958163620481e-05 | 49.69% | 98.79% | 1.99x | ✅ |
| `hexbytes_new['deadbeef']` | 7.727446050033969e-05 | 3.61408623399482e-05 | 53.23% | 113.81% | 2.14x | ✅ |
| `hexbytes_new[0-9]` | 4.292410437591481e-05 | 2.5043715662776278e-05 | 41.66% | 71.40% | 1.71x | ✅ |
| `hexbytes_new[0]` | 0.000124726088815723 | 3.8103310884443085e-05 | 69.45% | 227.34% | 3.27x | ✅ |
| `hexbytes_new[123456]` | 0.0001281085357685541 | 3.7915723380364756e-05 | 70.40% | 237.88% | 3.38x | ✅ |
| `hexbytes_new[2**16]` | 0.0001291372955413689 | 3.782732820330015e-05 | 70.71% | 241.39% | 3.41x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00012875115442043624 | 4.53876541447667e-05 | 64.75% | 183.67% | 2.84x | ✅ |
| `hexbytes_new[2**32]` | 0.00012992732548414919 | 4.1280990027896765e-05 | 68.23% | 214.74% | 3.15x | ✅ |
| `hexbytes_new[2**64]` | 0.000131386878926841 | 4.417479411114063e-05 | 66.38% | 197.42% | 2.97x | ✅ |
| `hexbytes_new[2**8]` | 0.00012849248500531067 | 3.866354064165686e-05 | 69.91% | 232.34% | 3.32x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.444788197064258e-05 | 2.5321854126545753e-05 | 43.03% | 75.53% | 1.76x | ✅ |
| `hexbytes_new[False]` | 6.133647912634393e-05 | 2.5336294577687912e-05 | 58.69% | 142.09% | 2.42x | ✅ |
| `hexbytes_new[True]` | 6.152839787531863e-05 | 2.5439667754771323e-05 | 58.65% | 141.86% | 2.42x | ✅ |
| `hexbytes_new[all byte values]` | 4.420286389834307e-05 | 2.5366778561098557e-05 | 42.61% | 74.25% | 1.74x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.5023268645615863e-05 | 2.616180027523159e-05 | 41.89% | 72.10% | 1.72x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.4323016810114826e-05 | 2.6242058976111145e-05 | 40.79% | 68.90% | 1.69x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.2963978189386135e-05 | 2.5445182676942506e-05 | 40.78% | 68.85% | 1.69x | ✅ |
| `hexbytes_new[b'']` | 4.359800460486674e-05 | 2.5287054853219013e-05 | 42.00% | 72.41% | 1.72x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.325365454214143e-05 | 2.4119283603828576e-05 | 44.24% | 79.33% | 1.79x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.3716072613553875e-05 | 2.501861194442574e-05 | 42.77% | 74.73% | 1.75x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.391592377839659e-05 | 2.5655312945795347e-05 | 41.58% | 71.18% | 1.71x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.87900134115603e-05 | 3.6631744724612784e-05 | 37.69% | 60.49% | 1.60x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.387463768461885e-05 | 2.453578038822906e-05 | 44.08% | 78.82% | 1.79x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.3883075710008426e-05 | 2.5362304072373494e-05 | 42.20% | 73.02% | 1.73x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.336404012574893e-05 | 2.4916932426583312e-05 | 42.54% | 74.03% | 1.74x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.3264135805232394e-05 | 2.416419770253238e-05 | 44.15% | 79.04% | 1.79x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.3471434283205634e-05 | 2.47855072391144e-05 | 42.98% | 75.39% | 1.75x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.462365579824874e-05 | 2.5598686824869095e-05 | 42.63% | 74.32% | 1.74x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.234223396039722e-05 | 3.0891707427663676e-05 | 40.98% | 69.44% | 1.69x | ✅ |
| `hexbytes_new[b'abc']` | 4.411465316042962e-05 | 2.486454852640188e-05 | 43.64% | 77.42% | 1.77x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.754484158142246e-05 | 3.391422170157371e-05 | 49.79% | 99.16% | 1.99x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.953509837155465e-05 | 3.602419046486925e-05 | 48.19% | 93.02% | 1.93x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.891770615068257e-05 | 3.575616977500657e-05 | 48.12% | 92.74% | 1.93x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.838483165289212e-05 | 3.477802930602044e-05 | 49.14% | 96.63% | 1.97x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.849983827457251e-05 | 3.501823088569763e-05 | 48.88% | 95.61% | 1.96x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.667668584738688e-05 | 3.385913943541271e-05 | 49.22% | 96.92% | 1.97x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.637415271964066e-05 | 3.279893749125929e-05 | 50.58% | 102.37% | 2.02x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.742723625517995e-05 | 3.376085601065122e-05 | 49.93% | 99.72% | 2.00x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.790891928491349e-05 | 3.427956094949156e-05 | 49.52% | 98.10% | 1.98x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.767158646311014e-05 | 3.541333534456426e-05 | 47.67% | 91.09% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.293219245056346e-05 | 5.3233787331728876e-05 | 42.72% | 74.57% | 1.75x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.763073670724103e-05 | 3.43763022725656e-05 | 49.17% | 96.74% | 1.97x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.820856368980402e-05 | 3.4416889238932926e-05 | 49.54% | 98.18% | 1.98x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.788662962161832e-05 | 3.431233253472858e-05 | 49.46% | 97.85% | 1.98x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.852396190416779e-05 | 3.416433238281657e-05 | 50.14% | 100.57% | 2.01x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.850652519723437e-05 | 3.431573537180785e-05 | 49.91% | 99.64% | 2.00x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.772392527780975e-05 | 3.51476093477753e-05 | 48.10% | 92.68% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.537829249523202e-05 | 4.752876622080427e-05 | 44.33% | 79.63% | 1.80x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.76074065385468e-05 | 3.42593910815578e-05 | 49.33% | 97.34% | 1.97x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.645012840257762e-05 | 4.702336534228872e-05 | 45.61% | 83.85% | 1.84x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.88828064561608e-05 | 3.5030238395396084e-05 | 49.15% | 96.64% | 1.97x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.6862121937093e-05 | 3.418161502884062e-05 | 48.88% | 95.61% | 1.96x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.70557982762243e-05 | 3.403232580002568e-05 | 49.25% | 97.04% | 1.97x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.761592824004811e-05 | 3.4276589182034875e-05 | 49.31% | 97.27% | 1.97x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.823985101036285e-05 | 3.404131556412084e-05 | 50.12% | 100.46% | 2.00x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.811211654642922e-05 | 3.6334449479190685e-05 | 46.65% | 87.46% | 1.87x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.774659901094361e-05 | 3.529527263033907e-05 | 47.90% | 91.94% | 1.92x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.802106224157366e-05 | 3.59603508519337e-05 | 47.13% | 89.16% | 1.89x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.757834583280084e-05 | 3.466214174414368e-05 | 48.71% | 94.96% | 1.95x | ✅ |
| `hexbytes_new[long alternating]` | 5.2337643026669045e-05 | 3.119843649943174e-05 | 40.39% | 67.76% | 1.68x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.356780091329335e-05 | 4.212295406685327e-05 | 49.59% | 98.39% | 1.98x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.396107284435333e-05 | 4.4342162062934805e-05 | 47.19% | 89.35% | 1.89x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.475003183785492e-05 | 4.2669692893888195e-05 | 49.65% | 98.62% | 1.99x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.340076432732561e-05 | 4.3374292568753466e-05 | 47.99% | 92.28% | 1.92x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.429117025601097e-05 | 4.309939746150898e-05 | 48.87% | 95.57% | 1.96x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.177502866742317e-05 | 4.2106968620227774e-05 | 48.51% | 94.21% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.064198303902705e-05 | 3.998916282379884e-05 | 50.41% | 101.66% | 2.02x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.314763917741585e-05 | 4.3170776128738624e-05 | 48.08% | 92.60% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.294540860436966e-05 | 4.2063853581481966e-05 | 49.29% | 97.19% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.532747398216135e-05 | 4.3641264808833516e-05 | 48.85% | 95.52% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010386147658735331 | 6.202116447130147e-05 | 40.28% | 67.46% | 1.67x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.281131208057089e-05 | 4.176837317614604e-05 | 49.56% | 98.26% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.390503106142645e-05 | 4.1957238229250886e-05 | 49.99% | 99.98% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.27881921483922e-05 | 4.2180944671243275e-05 | 49.05% | 96.27% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.398836105380992e-05 | 4.2173092082341905e-05 | 49.79% | 99.15% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.38277653340181e-05 | 4.208313279683935e-05 | 49.80% | 99.20% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.354352471964032e-05 | 4.328917308948549e-05 | 48.18% | 92.99% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 0.00010145272852692226 | 5.6295646091800465e-05 | 44.51% | 80.21% | 1.80x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.286692323089834e-05 | 4.1801435524745224e-05 | 49.56% | 98.24% | 1.98x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 0.00010140166780173642 | 5.620068155973764e-05 | 44.58% | 80.43% | 1.80x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.354033868275891e-05 | 4.265281625868643e-05 | 48.94% | 95.86% | 1.96x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.368758859187962e-05 | 4.201263545928553e-05 | 49.80% | 99.20% | 1.99x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.319121665666e-05 | 4.2296760506376566e-05 | 49.16% | 96.68% | 1.97x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.412726843783685e-05 | 4.243929896736992e-05 | 49.55% | 98.23% | 1.98x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.339676536962937e-05 | 4.257778667338712e-05 | 48.95% | 95.87% | 1.96x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.413769781257718e-05 | 4.3503042416988636e-05 | 48.30% | 93.41% | 1.93x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.215224703727495e-05 | 4.27858342076063e-05 | 47.92% | 92.01% | 1.92x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.301103757421094e-05 | 4.279613305916722e-05 | 48.45% | 93.97% | 1.94x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.39740634089171e-05 | 4.322499089640741e-05 | 48.53% | 94.27% | 1.94x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.343207780884095e-05 | 2.4992461671861077e-05 | 42.46% | 73.78% | 1.74x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.341148029001438e-05 | 2.490441691448927e-05 | 42.63% | 74.31% | 1.74x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.300550930587654e-05 | 2.4669956971501195e-05 | 42.64% | 74.32% | 1.74x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.3666652903427346e-05 | 2.4739736543647323e-05 | 43.34% | 76.50% | 1.77x | ✅ |
| `hexbytes_new[palindrome]` | 4.337823751975341e-05 | 2.438503529762081e-05 | 43.79% | 77.89% | 1.78x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.417895725905329e-05 | 2.5088902900288584e-05 | 43.21% | 76.09% | 1.76x | ✅ |
| `hexbytes_new[single 0xff]` | 4.316457320821945e-05 | 2.522966083692186e-05 | 41.55% | 71.09% | 1.71x | ✅ |
| `hexbytes_new[single null byte]` | 4.299796993247963e-05 | 2.5270927762485425e-05 | 41.23% | 70.15% | 1.70x | ✅ |
| `hexbytes_new[two patterns]` | 4.401410721500686e-05 | 2.5364731654505492e-05 | 42.37% | 73.52% | 1.74x | ✅ |
| `hexbytes_repr[0-9]` | 3.529322514360801e-05 | 1.6291665281745702e-05 | 53.84% | 116.63% | 2.17x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.0001246228987012925 | 4.223548661608796e-05 | 66.11% | 195.07% | 2.95x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00012444587614183144 | 4.1997022736403504e-05 | 66.25% | 196.32% | 2.96x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.388638190864947e-05 | 2.1622198836449686e-05 | 59.87% | 149.22% | 2.49x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 5.373936675498371e-05 | 2.152785100195309e-05 | 59.94% | 149.63% | 2.50x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.5694612949802954e-05 | 1.9409631264968843e-05 | 57.52% | 135.42% | 2.35x | ✅ |
| `hexbytes_repr[b'']` | 2.505092585609274e-05 | 1.2507953888592808e-05 | 50.07% | 100.28% | 2.00x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 4.1011424359672386e-05 | 1.8249712907313275e-05 | 55.50% | 124.72% | 2.25x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 3.236744211285642e-05 | 1.5296751124900932e-05 | 52.74% | 111.60% | 2.12x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.684883170438904e-05 | 2.501305732720487e-05 | 62.58% | 167.26% | 2.67x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007691808663150745 | 0.00022351241929882362 | 70.94% | 244.13% | 3.44x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 3.17938804203982e-05 | 1.5324162068053094e-05 | 51.80% | 107.48% | 2.07x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 3.272798769199524e-05 | 1.5525161883419143e-05 | 52.56% | 110.81% | 2.11x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.336362792187057e-05 | 1.5713187720795878e-05 | 52.90% | 112.33% | 2.12x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.3390470101784733e-05 | 1.5798724196655813e-05 | 52.68% | 111.35% | 2.11x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 3.203234541898029e-05 | 1.5165369678922795e-05 | 52.66% | 111.22% | 2.11x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.3849361928731165e-05 | 2.1440193863752916e-05 | 60.18% | 151.16% | 2.51x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.0004031908948223047 | 0.00012295979992697016 | 69.50% | 227.90% | 3.28x | ✅ |
| `hexbytes_repr[b'abc']` | 3.1094335246037186e-05 | 1.4995317819134969e-05 | 51.77% | 107.36% | 2.07x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0004030733302495512 | 0.0001230534308598308 | 69.47% | 227.56% | 3.28x | ✅ |
| `hexbytes_repr[mixed pattern]` | 0.00010270311408112921 | 3.5907358307363496e-05 | 65.04% | 186.02% | 2.86x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.417344005541053e-05 | 1.6231485078559952e-05 | 52.50% | 110.54% | 2.11x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.294068588207495e-05 | 1.5757106890644243e-05 | 52.17% | 109.05% | 2.09x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 3.2643258634442014e-05 | 1.5458644882368246e-05 | 52.64% | 111.17% | 2.11x | ✅ |
| `hexbytes_repr[palindrome]` | 3.804853617094793e-05 | 1.7245969423371278e-05 | 54.67% | 120.62% | 2.21x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.707793795950987e-05 | 2.4917083963351187e-05 | 62.85% | 169.20% | 2.69x | ✅ |
| `hexbytes_repr[single 0xff]` | 3.0033639574473493e-05 | 1.5029953739380721e-05 | 49.96% | 99.83% | 2.00x | ✅ |
| `hexbytes_repr[single null byte]` | 3.0112535973463957e-05 | 1.4970035734756145e-05 | 50.29% | 101.15% | 2.01x | ✅ |
| `hexbytes_repr[two patterns]` | 5.3724921344370964e-05 | 2.147354236301582e-05 | 60.03% | 150.19% | 2.50x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.701136390877612e-05 | 1.543671664348808e-05 | 9.26% | 10.20% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.389227129060379e-05 | 4.092881351801307e-05 | 6.75% | 7.24% | 1.07x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.402220113432032e-05 | 4.090940341934598e-05 | 7.07% | 7.61% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.3260640060598626e-05 | 2.0691327304247957e-05 | 11.05% | 12.42% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.2481555164272613e-05 | 2.0667600761820686e-05 | 8.07% | 8.78% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.049180492145839e-05 | 1.8657127968094947e-05 | 8.95% | 9.83% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0361974589637204e-05 | 1.2241613979572347e-05 | -18.14% | -15.35% | 0.85x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.8871475230153382e-05 | 1.71252336855311e-05 | 9.25% | 10.20% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.671018494611806e-05 | 1.4845298358876675e-05 | 11.16% | 12.56% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.624204399805747e-05 | 2.3964655016987772e-05 | 8.68% | 9.50% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022675992307420848 | 0.00022246975502179355 | 1.89% | 1.93% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.6261719636127116e-05 | 1.4867088326843512e-05 | 8.58% | 9.38% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.688655132329088e-05 | 1.494100934015207e-05 | 11.52% | 13.02% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.7123319166635167e-05 | 1.5141659530948321e-05 | 11.57% | 13.09% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.7102032242817452e-05 | 1.5209094950686344e-05 | 11.07% | 12.45% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.6876440915895048e-05 | 1.4802664174397051e-05 | 12.29% | 14.01% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.2532485471324698e-05 | 2.053202094797169e-05 | 8.88% | 9.74% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012437763570699744 | 0.00012118320171229564 | 2.57% | 2.64% | 1.03x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.6266608980333998e-05 | 1.4755336925631687e-05 | 9.29% | 10.24% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012354179424231204 | 0.00012190019434120888 | 1.33% | 1.35% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.662293578815981e-05 | 3.4809944879356443e-05 | 4.95% | 5.21% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.8006339636505616e-05 | 1.5261961777273032e-05 | 15.24% | 17.98% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.70769775267177e-05 | 1.520386056569784e-05 | 10.97% | 12.32% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.6666343450100726e-05 | 1.4837344580860331e-05 | 10.97% | 12.33% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.861076647616084e-05 | 1.6084322428769733e-05 | 13.58% | 15.71% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.638210237658967e-05 | 2.394960595053707e-05 | 9.22% | 10.16% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.5602696649254343e-05 | 1.445947742382432e-05 | 7.33% | 7.91% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.5703729310728558e-05 | 1.4586143141679606e-05 | 7.12% | 7.66% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.2497145179628883e-05 | 2.069186949104471e-05 | 8.02% | 8.72% | 1.09x | ✅ |
