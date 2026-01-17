#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/perf/hexstr-prefix-check/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/perf/hexstr-prefix-check/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.6927404268409057e-05 | 2.5904335265693464e-05 | 3.80% | 3.95% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.7016155597663094e-05 | 2.5383163291795044e-05 | 6.04% | 6.43% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.6731457421814204e-05 | 2.560909686071818e-05 | 4.20% | 4.38% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.699925234914483e-05 | 2.5893957733188896e-05 | 4.09% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.679991131957147e-05 | 2.5568804934491616e-05 | 4.59% | 4.81% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.6339078012234506e-05 | 2.575439576942233e-05 | 2.22% | 2.27% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.6949176209226266e-05 | 2.577386778308252e-05 | 4.36% | 4.56% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.7236010764345817e-05 | 2.573552023478288e-05 | 5.51% | 5.83% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.687353876765262e-05 | 2.5476271657589837e-05 | 5.20% | 5.48% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.7304324805275983e-05 | 2.5601690591917237e-05 | 6.24% | 6.65% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.692851819927519e-05 | 2.58777448804802e-05 | 3.90% | 4.06% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.7103016781185102e-05 | 2.5635958188675395e-05 | 5.41% | 5.72% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.699637881034602e-05 | 2.5818406972737685e-05 | 4.36% | 4.56% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.6783119866154147e-05 | 2.5895036124502266e-05 | 3.32% | 3.43% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.7647527959698158e-05 | 2.5417659177130476e-05 | 8.07% | 8.77% | 1.09x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.701926410518262e-05 | 2.5875401235978547e-05 | 4.23% | 4.42% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.7026598221792244e-05 | 2.582299414961432e-05 | 4.45% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.718340326544879e-05 | 2.56197917668139e-05 | 5.75% | 6.10% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.695029727206158e-05 | 2.5774882744510434e-05 | 4.36% | 4.56% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.6779136136164108e-05 | 2.5376678253063673e-05 | 5.24% | 5.53% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.7099670761909733e-05 | 2.5923185090115173e-05 | 4.34% | 4.54% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.6701179314033935e-05 | 2.5482808424482875e-05 | 4.56% | 4.78% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.6662400192212437e-05 | 2.5746669744748342e-05 | 3.43% | 3.56% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.7113439972532178e-05 | 2.5790643532894883e-05 | 4.88% | 5.13% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.679269092712544e-05 | 2.5839944925628142e-05 | 3.56% | 3.69% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.6737000921956306e-05 | 2.5804652937836766e-05 | 3.49% | 3.61% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.6169820996852963e-05 | 2.5152307167239177e-05 | 3.89% | 4.05% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.6047343540447703e-05 | 2.5352812397177603e-05 | 2.67% | 2.74% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.6238732794094155e-05 | 2.539812280303557e-05 | 3.20% | 3.31% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.6002510828695542e-05 | 2.5485487040723524e-05 | 1.99% | 2.03% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.6359581902408176e-05 | 2.5347366809450686e-05 | 3.84% | 3.99% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.60183956087243e-05 | 2.5159922433762285e-05 | 3.30% | 3.41% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.615750885373853e-05 | 2.5086667975187736e-05 | 4.09% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.5991031707004995e-05 | 2.5338384621592568e-05 | 2.51% | 2.58% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.613281799935473e-05 | 2.527036245252173e-05 | 3.30% | 3.41% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.6216509495364536e-05 | 2.526281641938394e-05 | 3.64% | 3.78% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.601502283197892e-05 | 2.5096805602145348e-05 | 3.53% | 3.66% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6073798944383324e-05 | 2.5041445910215923e-05 | 3.96% | 4.12% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.620875386500342e-05 | 2.509735838605304e-05 | 4.24% | 4.43% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.6178996466496566e-05 | 2.4921213035732268e-05 | 4.80% | 5.05% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.5953774273334555e-05 | 2.514392532471779e-05 | 3.12% | 3.22% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.6136021160711067e-05 | 2.5335110602238065e-05 | 3.06% | 3.16% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.6113007051290093e-05 | 2.5166377683284115e-05 | 3.63% | 3.76% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.5929405034626493e-05 | 2.5201708808092005e-05 | 2.81% | 2.89% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.591294347037507e-05 | 2.4863201343170305e-05 | 4.05% | 4.22% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.6353090161624728e-05 | 2.5296489646435505e-05 | 4.01% | 4.18% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.612489128387871e-05 | 2.497449491040422e-05 | 4.40% | 4.61% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.6198493261467315e-05 | 2.5396406555790493e-05 | 3.06% | 3.16% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.6123060340800404e-05 | 2.538205424413767e-05 | 2.84% | 2.92% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.677791472522046e-05 | 2.4960097859270907e-05 | 6.79% | 7.28% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.5390834503358037e-05 | 2.5203240038362985e-05 | 0.74% | 0.74% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.638522961430286e-05 | 2.4956052612173647e-05 | 5.42% | 5.73% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.60968628299867e-05 | 2.5019937183136457e-05 | 4.13% | 4.30% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.6198809462429826e-05 | 2.481367505626025e-05 | 5.29% | 5.58% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.601953910184158e-05 | 2.5485606939687864e-05 | 2.05% | 2.10% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.6012473498622616e-05 | 2.5250709628093694e-05 | 2.93% | 3.02% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.5999253696741508e-05 | 2.4968439643782963e-05 | 3.96% | 4.13% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.6140344752030428e-05 | 2.532301389077046e-05 | 3.13% | 3.23% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.5969459290232018e-05 | 2.5422504252073017e-05 | 2.11% | 2.15% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.6076020022171257e-05 | 2.5858117743885577e-05 | 0.84% | 0.84% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.5986798819297458e-05 | 2.5129559596949318e-05 | 3.30% | 3.41% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.6169477766722468e-05 | 2.5215167144064978e-05 | 3.65% | 3.78% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.6017584137352243e-05 | 2.516063231960857e-05 | 3.29% | 3.41% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.6140570270823812e-05 | 2.534803389055834e-05 | 3.03% | 3.13% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.6015612268380602e-05 | 2.488100692479917e-05 | 4.36% | 4.56% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.591155465804417e-05 | 2.5295001761614096e-05 | 2.38% | 2.44% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.6000179301422683e-05 | 2.5416918294522483e-05 | 2.24% | 2.29% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.5954014639257525e-05 | 2.5195285539343362e-05 | 2.92% | 3.01% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.6013375247948972e-05 | 2.516882044920314e-05 | 3.25% | 3.36% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.6113195237851597e-05 | 2.528665931131813e-05 | 3.17% | 3.27% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.5910658611037135e-05 | 2.4935538114748725e-05 | 3.76% | 3.91% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.5985158189253766e-05 | 2.5237913939007884e-05 | 2.88% | 2.96% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.596460232636831e-05 | 2.499339051348776e-05 | 3.74% | 3.89% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.6048601242308922e-05 | 2.5322004724528243e-05 | 2.79% | 2.87% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.5981422988466052e-05 | 2.5347789305664912e-05 | 2.44% | 2.50% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.6064252571162196e-05 | 2.5473263966847693e-05 | 2.27% | 2.32% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.597309907390507e-05 | 2.5139941510779958e-05 | 3.21% | 3.31% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.612203554908702e-05 | 2.4928594776399064e-05 | 4.57% | 4.79% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.599811892504558e-05 | 2.500566762859539e-05 | 3.82% | 3.97% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.6150199407345977e-05 | 2.5609843714555972e-05 | 2.07% | 2.11% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.5922207114941026e-05 | 2.554412263314112e-05 | 1.46% | 1.48% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.610645384376068e-05 | 2.5666753512684416e-05 | 1.68% | 1.71% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.6032042575248368e-05 | 2.5121468528987853e-05 | 3.50% | 3.62% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.597688602768713e-05 | 2.5302981039443136e-05 | 2.59% | 2.66% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.5750161142839604e-05 | 2.5523684195194078e-05 | 0.88% | 0.89% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.6039084615419793e-05 | 2.5449635178933152e-05 | 2.26% | 2.32% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.6015748184439714e-05 | 2.5304576200594657e-05 | 2.73% | 2.81% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.5755913543365385e-05 | 2.546089650730198e-05 | 1.15% | 1.16% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.5957101518630513e-05 | 2.530045024308448e-05 | 2.53% | 2.60% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.591178813895208e-05 | 2.6165946751889516e-05 | -0.98% | -0.97% | 0.99x | ❌ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.581227519078737e-05 | 2.551462719823978e-05 | 1.15% | 1.17% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.593830133652915e-05 | 2.5440328259690792e-05 | 1.92% | 1.96% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.576020107335503e-05 | 2.592744010813939e-05 | -0.65% | -0.65% | 0.99x | ❌ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.6319751611015234e-05 | 2.6061622228113415e-05 | 0.98% | 0.99% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.5781205233377567e-05 | 2.5357240620353603e-05 | 1.64% | 1.67% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.5720099147971294e-05 | 2.5470307903605717e-05 | 0.97% | 0.98% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.6277165570049935e-05 | 2.540103334238839e-05 | 3.33% | 3.45% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.6031922531757724e-05 | 2.5327527317347793e-05 | 2.71% | 2.78% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.594195941085158e-05 | 2.5916941368795223e-05 | 0.10% | 0.10% | 1.00x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.6153504998660773e-05 | 2.5186777467040877e-05 | 3.70% | 3.84% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.6054609671319934e-05 | 2.604087866498609e-05 | 0.05% | 0.05% | 1.00x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.58903113869501e-05 | 2.511590226732717e-05 | 2.99% | 3.08% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.6150961523228075e-05 | 2.5458570290192554e-05 | 2.65% | 2.72% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.5956947189046577e-05 | 2.546594125377941e-05 | 1.89% | 1.93% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.617690309563872e-05 | 2.6364629049952407e-05 | -0.72% | -0.71% | 0.99x | ❌ |
| `hexbytes_getitem_index[2-two patterns]` | 2.6026002704725852e-05 | 2.533959056399034e-05 | 2.64% | 2.71% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.597760593920275e-05 | 2.7109967044761093e-05 | -4.36% | -4.18% | 0.96x | ❌ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.5997877661648034e-05 | 2.5596061319742473e-05 | 1.55% | 1.57% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.5971071836176435e-05 | 2.51751379467131e-05 | 3.06% | 3.16% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.5826747213388524e-05 | 2.541845997295198e-05 | 1.58% | 1.61% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.5917178108389097e-05 | 2.533847311350652e-05 | 2.23% | 2.28% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.6115106396505582e-05 | 2.567944935717395e-05 | 1.67% | 1.70% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.5711430450578713e-05 | 2.5644268855055105e-05 | 0.26% | 0.26% | 1.00x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.593770156349675e-05 | 2.558172881499371e-05 | 1.37% | 1.39% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.5795650346912854e-05 | 2.5301124376021645e-05 | 1.92% | 1.95% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.5787946507542793e-05 | 2.559988197253682e-05 | 0.73% | 0.73% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.591578632198894e-05 | 2.594097559010886e-05 | -0.10% | -0.10% | 1.00x | ❌ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.6034780673555215e-05 | 2.5500639182473734e-05 | 2.05% | 2.09% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.6007024373383855e-05 | 2.5429733462215906e-05 | 2.22% | 2.27% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.5835945647856095e-05 | 2.5516927323289874e-05 | 1.23% | 1.25% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.5947121772740865e-05 | 2.5583175922649487e-05 | 1.40% | 1.42% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.5981634927392584e-05 | 2.5435534706312887e-05 | 2.10% | 2.15% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.6001629735309e-05 | 2.5451615079245987e-05 | 2.12% | 2.16% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.590093034995555e-05 | 2.6133492122499675e-05 | -0.90% | -0.89% | 0.99x | ❌ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.5914264816486576e-05 | 2.5642618981105818e-05 | 1.05% | 1.06% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.604414016885261e-05 | 2.5486245844810282e-05 | 2.14% | 2.19% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.583883555449737e-05 | 2.5430439913457755e-05 | 1.58% | 1.61% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.5941741229002813e-05 | 2.5327217381666436e-05 | 2.37% | 2.43% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.6263306995758813e-05 | 2.566387055309208e-05 | 2.28% | 2.34% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.6077427583436544e-05 | 2.578223039675195e-05 | 1.13% | 1.14% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.600727537357712e-05 | 2.5124050040982553e-05 | 3.40% | 3.52% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.6422804973082097e-05 | 2.534435259266206e-05 | 4.08% | 4.26% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.6940883375935003e-05 | 2.5548332858556622e-05 | 5.17% | 5.45% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.6270126680954925e-05 | 2.504144964211511e-05 | 4.68% | 4.91% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.6073339475019292e-05 | 2.492484819250952e-05 | 4.40% | 4.61% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.6112661565327917e-05 | 2.5285985761444287e-05 | 3.17% | 3.27% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.61819719566379e-05 | 2.5592456380326984e-05 | 2.25% | 2.30% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.6223855230052097e-05 | 2.518728965481505e-05 | 3.95% | 4.12% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.628828247023131e-05 | 2.5549337428633312e-05 | 2.81% | 2.89% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6149284512374767e-05 | 2.528711515109445e-05 | 3.30% | 3.41% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.6206423868112033e-05 | 2.5610728677050967e-05 | 2.27% | 2.33% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.6383429610952408e-05 | 2.5626180869855133e-05 | 2.87% | 2.95% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.6113574163980336e-05 | 2.5592748231464144e-05 | 1.99% | 2.04% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.6048183716792012e-05 | 2.5740356678574748e-05 | 1.18% | 1.20% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.5593212547719077e-05 | 2.546488989485185e-05 | 0.50% | 0.50% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.6174308090841278e-05 | 2.56038675444866e-05 | 2.18% | 2.23% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.625407563726755e-05 | 2.551329820532501e-05 | 2.82% | 2.90% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.6019794536818885e-05 | 2.565826290357242e-05 | 1.39% | 1.41% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.6155221805449268e-05 | 2.5639895065892893e-05 | 1.97% | 2.01% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.6093716427739157e-05 | 2.5762622978422963e-05 | 1.27% | 1.29% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.615334032600769e-05 | 2.5614204718185857e-05 | 2.06% | 2.10% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.6060833920114204e-05 | 2.552127722718298e-05 | 2.07% | 2.11% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.6220215936551968e-05 | 2.5542412374754956e-05 | 2.59% | 2.65% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.613526585462186e-05 | 2.5344901679234976e-05 | 3.02% | 3.12% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.6355211255497044e-05 | 2.5385576766909283e-05 | 3.68% | 3.82% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.621165125714226e-05 | 2.5772290874643226e-05 | 1.68% | 1.70% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.6320372208767976e-05 | 2.5658284951808325e-05 | 2.52% | 2.58% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.6566156415301172e-05 | 2.5699322392564097e-05 | 3.26% | 3.37% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.63890280003214e-05 | 2.5606427696472248e-05 | 2.97% | 3.06% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.6168511059491236e-05 | 2.56270804652081e-05 | 2.07% | 2.11% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.6202567422720895e-05 | 2.514285885499787e-05 | 4.04% | 4.21% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.6122846577282348e-05 | 2.5533965988741025e-05 | 2.25% | 2.31% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.6182102754667284e-05 | 2.556808118752987e-05 | 2.35% | 2.40% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.6191606456064858e-05 | 2.5681528726571243e-05 | 1.95% | 1.99% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.6129211003444613e-05 | 2.541449227697275e-05 | 2.74% | 2.81% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.622121692839598e-05 | 2.524518677744081e-05 | 3.72% | 3.87% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.6693592300624525e-05 | 2.5245704574688597e-05 | 5.42% | 5.74% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.6161121570924936e-05 | 2.5276072428977966e-05 | 3.38% | 3.50% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.6184616142389905e-05 | 2.5385510897369022e-05 | 3.05% | 3.15% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.611070748415065e-05 | 2.5239810889658846e-05 | 3.34% | 3.45% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.640181936161282e-05 | 2.5230415559693865e-05 | 4.44% | 4.64% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.6627806623364725e-05 | 2.5122060875108144e-05 | 5.65% | 5.99% | 1.06x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.490723823308706e-05 | 5.4704067439052535e-05 | 35.57% | 55.21% | 1.55x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.213639476065165e-05 | 5.52807592699083e-05 | 32.70% | 48.58% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.240769588580184e-05 | 5.4336030351092864e-05 | 34.06% | 51.66% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.173636098235984e-05 | 5.448813286404735e-05 | 33.34% | 50.01% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.22861171797547e-05 | 5.479563424909344e-05 | 33.41% | 50.17% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.23418329378043e-05 | 5.480274183568187e-05 | 33.44% | 50.25% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.882018439245436e-05 | 5.243095918897662e-05 | 33.48% | 50.33% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.250584721717795e-05 | 5.501812199807045e-05 | 33.32% | 49.96% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.105731950764741e-05 | 5.447164824330199e-05 | 32.80% | 48.81% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.10803457001253e-05 | 5.647077773010934e-05 | 30.35% | 43.58% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.179063451836937e-05 | 5.443162695531259e-05 | 33.45% | 50.26% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.149080765618772e-05 | 5.5094559208839375e-05 | 32.39% | 47.91% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.113124395404588e-05 | 5.469643050916075e-05 | 32.58% | 48.33% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.066630397325458e-05 | 5.456301103075068e-05 | 32.36% | 47.84% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.185122172762897e-05 | 5.439447883933793e-05 | 33.54% | 50.48% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.281682867211749e-05 | 5.51180796618981e-05 | 33.45% | 50.25% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.128932585478033e-05 | 5.4221283829620344e-05 | 33.30% | 49.92% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.118270123203606e-05 | 5.5264242425140615e-05 | 31.93% | 46.90% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.267246012247237e-05 | 5.5007799365642496e-05 | 33.46% | 50.29% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.136385031312312e-05 | 5.492109144919349e-05 | 32.50% | 48.15% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.191732829222074e-05 | 5.612470056994386e-05 | 31.49% | 45.96% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.250315774712064e-05 | 5.4700424030325366e-05 | 33.70% | 50.83% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.281005925570321e-05 | 5.470066864357165e-05 | 33.94% | 51.39% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.257275421559514e-05 | 5.457348646220059e-05 | 33.91% | 51.31% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.131072230684824e-05 | 5.4843815456491886e-05 | 32.55% | 48.26% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.170015331182979e-05 | 5.484436199769935e-05 | 32.87% | 48.97% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.868644520462784e-05 | 5.388471029568923e-05 | 31.52% | 46.03% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.835552169299511e-05 | 5.2648513587137616e-05 | 32.81% | 48.83% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.255191236555529e-05 | 5.49174266599351e-05 | 33.48% | 50.32% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.269123682873207e-05 | 5.590069227127867e-05 | 32.40% | 47.93% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.464985022863088e-05 | 5.567647188708041e-05 | 34.23% | 52.04% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.39357923958974e-05 | 5.569705914728551e-05 | 33.64% | 50.70% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.336964159918672e-05 | 5.606433185317153e-05 | 32.75% | 48.70% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.34059488224e-05 | 5.514486725710199e-05 | 33.88% | 51.25% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.308193155919144e-05 | 5.5564499646881485e-05 | 33.12% | 49.52% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.82265962425022e-05 | 5.42108096614475e-05 | 30.70% | 44.30% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.213686277230606e-05 | 6.04102279052995e-05 | 26.45% | 35.97% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.322767228770658e-05 | 5.542973130506441e-05 | 33.40% | 50.15% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.345545792631677e-05 | 5.5536886334778776e-05 | 33.45% | 50.27% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 9.036550207124263e-05 | 5.537700641901812e-05 | 38.72% | 63.18% | 1.63x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.328718972911158e-05 | 5.5596976912142165e-05 | 33.25% | 49.81% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.450668381685775e-05 | 5.5239071904773406e-05 | 34.63% | 52.98% | 1.53x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.296293824666016e-05 | 5.7130418222025815e-05 | 31.14% | 45.22% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.33125575366981e-05 | 5.561045443910926e-05 | 33.25% | 49.81% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.322042596309983e-05 | 5.511967444547885e-05 | 33.77% | 50.98% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.290001902055082e-05 | 5.855195428081414e-05 | 29.37% | 41.58% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.466426602423392e-05 | 5.6103293567790426e-05 | 33.73% | 50.91% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.293333273832883e-05 | 5.514777161810733e-05 | 33.50% | 50.38% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.36126093375921e-05 | 5.486125219229834e-05 | 34.39% | 52.41% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.233678659526929e-05 | 5.5695604249664906e-05 | 32.36% | 47.83% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.260264856739027e-05 | 5.5436867114819884e-05 | 32.89% | 49.00% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.403175869192849e-05 | 5.5421637688253056e-05 | 34.05% | 51.62% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.5141282484074e-05 | 5.5981833772242584e-05 | 34.25% | 52.09% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.357701343565346e-05 | 5.548074367704773e-05 | 33.62% | 50.64% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.19459765451698e-05 | 5.562381182854075e-05 | 32.12% | 47.32% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 7.834177521667072e-05 | 5.320080775027193e-05 | 32.09% | 47.26% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.916791614336177e-05 | 5.4063475373172894e-05 | 31.71% | 46.44% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.31225779907624e-05 | 5.6978576391044725e-05 | 31.45% | 45.88% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.277039715054126e-05 | 5.5340328806124155e-05 | 33.14% | 49.57% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.201978371611166e-05 | 5.5533142271951786e-05 | 32.29% | 47.70% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.20987427575913e-05 | 5.563789977661739e-05 | 32.23% | 47.56% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.488484898070495e-05 | 5.552646616560366e-05 | 34.59% | 52.87% | 1.53x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.18445113177991e-05 | 5.524572096015523e-05 | 32.50% | 48.15% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.224793551644383e-05 | 5.587017917415687e-05 | 32.07% | 47.21% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.899215109885368e-05 | 5.406895919886782e-05 | 31.55% | 46.10% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.257367474069986e-05 | 5.5909511182946574e-05 | 32.29% | 47.69% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.31425735621416e-05 | 5.54079583083581e-05 | 33.36% | 50.06% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.316899931990166e-05 | 5.569960413342474e-05 | 33.03% | 49.32% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.268021712706045e-05 | 5.557872297396103e-05 | 32.78% | 48.76% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.214050791081927e-05 | 5.5878921726856985e-05 | 31.97% | 47.00% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.191995115678148e-05 | 5.521972228718504e-05 | 32.59% | 48.35% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.328279204844339e-05 | 5.626087061085751e-05 | 32.45% | 48.03% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.191677569884892e-05 | 5.456602297674016e-05 | 33.39% | 50.12% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.237384269861913e-05 | 5.573083472086981e-05 | 32.34% | 47.81% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.33708094539488e-05 | 5.584600147801398e-05 | 33.01% | 49.29% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.200130752800523e-05 | 5.659577605684129e-05 | 30.98% | 44.89% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.149751906893017e-05 | 5.5768984692283935e-05 | 31.57% | 46.13% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.274780626222708e-05 | 5.6031192844087784e-05 | 32.29% | 47.68% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.233755236469827e-05 | 5.546019361366181e-05 | 32.64% | 48.46% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.25195153999824e-05 | 5.582803486137089e-05 | 32.35% | 47.81% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.408352323997358e-05 | 5.558960197003075e-05 | 33.89% | 51.26% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.348092809552035e-05 | 5.581132953090263e-05 | 33.14% | 49.58% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.353550873602446e-05 | 5.5948324000477415e-05 | 33.02% | 49.31% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.077736460288889e-05 | 5.5523390598011634e-05 | 31.26% | 45.48% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.910023706598191e-05 | 5.408815017250214e-05 | 31.62% | 46.24% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 7.971110838210042e-05 | 5.43443751654639e-05 | 31.82% | 46.68% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.154088991297943e-05 | 5.5691830566851514e-05 | 31.70% | 46.41% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.175762867313082e-05 | 5.386215608964716e-05 | 34.12% | 51.79% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.254844213372382e-05 | 5.49883840304207e-05 | 33.39% | 50.12% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.201902969121203e-05 | 5.448898612096069e-05 | 33.57% | 50.52% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.462524809517544e-05 | 5.4263403404413144e-05 | 35.88% | 55.95% | 1.56x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.456718592258221e-05 | 5.443063610593584e-05 | 35.64% | 55.37% | 1.55x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.303027375814427e-05 | 5.417344019542803e-05 | 34.75% | 53.27% | 1.53x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.80530014413406e-05 | 5.416720015669337e-05 | 30.60% | 44.10% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.200510600479462e-05 | 5.496861010153347e-05 | 32.97% | 49.19% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.087788214209424e-05 | 5.4824917423528024e-05 | 32.21% | 47.52% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.223125237066701e-05 | 5.3989814676426635e-05 | 34.34% | 52.31% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010517610018616976 | 7.472236915745338e-05 | 28.95% | 40.76% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.812671254121902e-05 | 5.247902605703819e-05 | 32.83% | 48.87% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.222230385418074e-05 | 5.491138088565198e-05 | 33.22% | 49.74% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.279424694084448e-05 | 5.485683655956809e-05 | 33.74% | 50.93% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.226529145430944e-05 | 5.493206508838069e-05 | 33.23% | 49.76% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.058273653863672e-05 | 5.477643269094567e-05 | 32.02% | 47.11% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.19851520181168e-05 | 5.415462513592601e-05 | 33.95% | 51.39% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.752490061219865e-05 | 6.959455888918729e-05 | 28.64% | 40.13% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.770200552447039e-05 | 5.240880869488303e-05 | 32.55% | 48.26% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 0.00010174763072725778 | 7.029588412500689e-05 | 30.91% | 44.74% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.318653159447867e-05 | 5.411327302845525e-05 | 34.95% | 53.73% | 1.54x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.179031243617737e-05 | 5.405487877365146e-05 | 33.91% | 51.31% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.219109801455903e-05 | 5.5258754142379334e-05 | 32.77% | 48.74% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.2035393278921e-05 | 5.468017446390934e-05 | 33.35% | 50.03% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.268831219115271e-05 | 5.4195134843710246e-05 | 34.46% | 52.58% | 1.53x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.377292560247418e-05 | 5.495248074151005e-05 | 34.40% | 52.45% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.968635682360023e-05 | 5.3011542224275765e-05 | 33.47% | 50.32% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.919893771660742e-05 | 5.3335198989690594e-05 | 32.66% | 48.49% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.467864605327094e-05 | 5.3993073743047967e-05 | 36.24% | 56.83% | 1.57x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.967314773496609e-05 | 5.234295593334556e-05 | 34.30% | 52.21% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.109849441097475e-05 | 5.516153896719645e-05 | 31.98% | 47.02% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.126842783871451e-05 | 5.5341180416918856e-05 | 31.90% | 46.85% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.02033938837498e-05 | 5.3364032946705e-05 | 33.46% | 50.29% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.053067922177484e-05 | 5.357621630583956e-05 | 33.47% | 50.31% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.900691848502016e-05 | 5.234928994640225e-05 | 33.74% | 50.92% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.689418957564864e-05 | 5.125850139765444e-05 | 33.34% | 50.01% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.889178360546407e-05 | 5.2739071972845657e-05 | 33.15% | 49.59% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.95267898711533e-05 | 5.266457284376661e-05 | 33.78% | 51.01% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.016724391279727e-05 | 5.307458497472579e-05 | 33.80% | 51.05% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010320513067569631 | 7.306750800094075e-05 | 29.20% | 41.25% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 7.987602971781529e-05 | 5.318240187365684e-05 | 33.42% | 50.19% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.990120839215673e-05 | 5.3321033215776477e-05 | 33.27% | 49.85% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.939192651841738e-05 | 5.290159434121089e-05 | 33.37% | 50.07% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.885996385817878e-05 | 5.4338669486111006e-05 | 31.09% | 45.13% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.934980591349963e-05 | 5.2903169318216665e-05 | 33.33% | 49.99% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.963712031439423e-05 | 5.272263510339286e-05 | 33.80% | 51.05% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.755720136749295e-05 | 6.761188595253708e-05 | 30.70% | 44.29% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.99326615462412e-05 | 5.3104160637027116e-05 | 33.56% | 50.52% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.730855283550707e-05 | 6.783900924056933e-05 | 30.28% | 43.44% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.02332647088316e-05 | 5.281535263347249e-05 | 34.17% | 51.91% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.939705333034092e-05 | 5.251856734021423e-05 | 33.85% | 51.18% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.896024614544467e-05 | 5.360862892232793e-05 | 32.11% | 47.29% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.90232971821629e-05 | 5.299976093205998e-05 | 32.93% | 49.10% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.917641034953082e-05 | 5.236274433682556e-05 | 33.87% | 51.21% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.996263404261415e-05 | 5.2115100417004266e-05 | 34.83% | 53.43% | 1.53x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.576012159886484e-05 | 5.118643363023807e-05 | 32.44% | 48.01% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.704619358096061e-05 | 5.1984578616840844e-05 | 32.53% | 48.21% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.934843659333858e-05 | 5.239808405224582e-05 | 33.96% | 51.43% | 1.51x | ✅ |
| `hexbytes_new['']` | 7.307471429682355e-05 | 2.88317621327279e-05 | 60.54% | 153.45% | 2.53x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.075303749666225e-05 | 4.453680970562058e-05 | 50.93% | 103.77% | 2.04x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.319689221653681e-05 | 4.411241146138745e-05 | 52.67% | 111.27% | 2.11x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.970369590522278e-05 | 4.122873886942299e-05 | 54.04% | 117.58% | 2.18x | ✅ |
| `hexbytes_new['0x']` | 7.782755541940118e-05 | 2.941715538714492e-05 | 62.20% | 164.57% | 2.65x | ✅ |
| `hexbytes_new['0x1234']` | 8.632982712377116e-05 | 3.8850054883544536e-05 | 55.00% | 122.21% | 2.22x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.652013612649403e-05 | 3.985189871818899e-05 | 53.94% | 117.10% | 2.17x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.599929718583433e-05 | 3.911352728717938e-05 | 54.52% | 119.87% | 2.20x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.638714518169857e-05 | 4.000190191458911e-05 | 53.69% | 115.96% | 2.16x | ✅ |
| `hexbytes_new['abc']` | 8.406996889076108e-05 | 4.2193090819130144e-05 | 49.81% | 99.25% | 1.99x | ✅ |
| `hexbytes_new['deadbeef']` | 7.740416635406108e-05 | 3.609188175568295e-05 | 53.37% | 114.46% | 2.14x | ✅ |
| `hexbytes_new[0-9]` | 4.333708212916543e-05 | 2.3790811616350913e-05 | 45.10% | 82.16% | 1.82x | ✅ |
| `hexbytes_new[0]` | 0.0001261192392804712 | 3.790951002131179e-05 | 69.94% | 232.68% | 3.33x | ✅ |
| `hexbytes_new[123456]` | 0.000127674631486358 | 3.759329687829408e-05 | 70.56% | 239.62% | 3.40x | ✅ |
| `hexbytes_new[2**16]` | 0.00012871020256216174 | 3.782036008724039e-05 | 70.62% | 240.32% | 3.40x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00013566685110243752 | 4.7133960950812566e-05 | 65.26% | 187.83% | 2.88x | ✅ |
| `hexbytes_new[2**32]` | 0.00013265550984620998 | 4.04861679286107e-05 | 69.48% | 227.66% | 3.28x | ✅ |
| `hexbytes_new[2**64]` | 0.00013403334577892316 | 4.479842690815182e-05 | 66.58% | 199.19% | 2.99x | ✅ |
| `hexbytes_new[2**8]` | 0.0001315028968375262 | 3.8343986916601124e-05 | 70.84% | 242.96% | 3.43x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.4741749423597057e-05 | 2.515389000052331e-05 | 43.78% | 77.87% | 1.78x | ✅ |
| `hexbytes_new[False]` | 6.0351260689489234e-05 | 2.5937539033672277e-05 | 57.02% | 132.68% | 2.33x | ✅ |
| `hexbytes_new[True]` | 6.0793168175066415e-05 | 2.6372773297507508e-05 | 56.62% | 130.51% | 2.31x | ✅ |
| `hexbytes_new[all byte values]` | 4.459778751319231e-05 | 2.5195225980604674e-05 | 43.51% | 77.01% | 1.77x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.414707622716113e-05 | 2.463536652710269e-05 | 44.20% | 79.20% | 1.79x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.40693439787415e-05 | 2.4725634251521127e-05 | 43.89% | 78.23% | 1.78x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.342918540576994e-05 | 2.3469651732683912e-05 | 45.96% | 85.04% | 1.85x | ✅ |
| `hexbytes_new[b'']` | 4.252779827159584e-05 | 2.506658559282072e-05 | 41.06% | 69.66% | 1.70x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.331474104024012e-05 | 2.3711750877282326e-05 | 45.26% | 82.67% | 1.83x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.337043885112812e-05 | 2.3810543353288138e-05 | 45.10% | 82.15% | 1.82x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.5088536335013944e-05 | 2.5648993711706744e-05 | 43.11% | 75.79% | 1.76x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.543072600579908e-05 | 3.675542488863073e-05 | 33.69% | 50.81% | 1.51x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.2964484797765914e-05 | 2.3851043706566858e-05 | 44.49% | 80.14% | 1.80x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.311403568853866e-05 | 2.3608321941848904e-05 | 45.24% | 82.62% | 1.83x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.3153115222308886e-05 | 2.377314891113744e-05 | 44.91% | 81.52% | 1.82x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.3416532556701475e-05 | 2.370865726175966e-05 | 45.39% | 83.13% | 1.83x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.339046788547941e-05 | 2.3896645072114438e-05 | 44.93% | 81.58% | 1.82x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.408169582359365e-05 | 2.4697785572074402e-05 | 43.97% | 78.48% | 1.78x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.000894296126133e-05 | 3.165451471391651e-05 | 36.70% | 57.98% | 1.58x | ✅ |
| `hexbytes_new[b'abc']` | 4.337263363516953e-05 | 2.3479181397628486e-05 | 45.87% | 84.73% | 1.85x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.81045805946616e-05 | 3.501566546134008e-05 | 48.59% | 94.50% | 1.94x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.955394531756009e-05 | 3.6577463532602485e-05 | 47.41% | 90.16% | 1.90x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.932381559774361e-05 | 3.6312222016049554e-05 | 47.62% | 90.91% | 1.91x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.90041195807695e-05 | 3.444386150114628e-05 | 50.08% | 100.34% | 2.00x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.857848096339814e-05 | 3.576398137394867e-05 | 47.85% | 91.75% | 1.92x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.883889639635331e-05 | 3.4825914711181846e-05 | 49.41% | 97.67% | 1.98x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.682810475599109e-05 | 3.25148602254259e-05 | 51.35% | 105.53% | 2.06x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.843149079924857e-05 | 3.495030454649439e-05 | 48.93% | 95.80% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.890628151232287e-05 | 3.513153847045536e-05 | 49.02% | 96.14% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.935532208650484e-05 | 3.5684685072151316e-05 | 48.55% | 94.36% | 1.94x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.020899503031021e-05 | 5.285031376646983e-05 | 41.41% | 70.69% | 1.71x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.859096602786928e-05 | 3.521829192645882e-05 | 48.65% | 94.76% | 1.95x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.83096945635912e-05 | 3.550071626826707e-05 | 48.03% | 92.42% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.848982111669349e-05 | 3.503811139075966e-05 | 48.84% | 95.47% | 1.95x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.836970033312113e-05 | 3.5145215870123267e-05 | 48.60% | 94.53% | 1.95x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.745769901916276e-05 | 3.525894493109419e-05 | 47.73% | 91.32% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.816590172028394e-05 | 3.573778696750121e-05 | 47.57% | 90.74% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.483599751236596e-05 | 4.876769020636382e-05 | 42.52% | 73.96% | 1.74x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.958887018106944e-05 | 3.547670622452761e-05 | 49.02% | 96.15% | 1.96x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.698066362506446e-05 | 4.71628462366746e-05 | 45.78% | 84.43% | 1.84x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 7.140400985245591e-05 | 3.691008716842253e-05 | 48.31% | 93.45% | 1.93x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.866339151373565e-05 | 3.494315407091834e-05 | 49.11% | 96.50% | 1.97x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.84776003219977e-05 | 3.4922969741007014e-05 | 49.00% | 96.08% | 1.96x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.835553111054018e-05 | 3.519665775394223e-05 | 48.51% | 94.21% | 1.94x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.889367402386273e-05 | 3.502544283467396e-05 | 49.16% | 96.70% | 1.97x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 7.033073756191398e-05 | 3.698445703126163e-05 | 47.41% | 90.16% | 1.90x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.911896795475694e-05 | 3.5713614030613405e-05 | 48.33% | 93.54% | 1.94x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.887904753337166e-05 | 3.566610437766473e-05 | 48.22% | 93.12% | 1.93x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.884881072676936e-05 | 3.564856268291571e-05 | 48.22% | 93.13% | 1.93x | ✅ |
| `hexbytes_new[long alternating]` | 5.068748001936307e-05 | 3.1898378324536905e-05 | 37.07% | 58.90% | 1.59x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.190418508638585e-05 | 4.3170677472219635e-05 | 47.29% | 89.72% | 1.90x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.540595631471273e-05 | 4.448926020451424e-05 | 47.91% | 91.97% | 1.92x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.489663537848498e-05 | 4.6426671956363665e-05 | 45.31% | 82.86% | 1.83x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.458953825803404e-05 | 4.415908974253183e-05 | 47.80% | 91.56% | 1.92x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.417427215466499e-05 | 4.4379468800911675e-05 | 47.28% | 89.67% | 1.90x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.394183624818314e-05 | 4.2991829828753214e-05 | 48.78% | 95.25% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.283432052482486e-05 | 4.205425285165341e-05 | 49.23% | 96.97% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.39012887174492e-05 | 4.3199265128368056e-05 | 48.51% | 94.22% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.467493133824838e-05 | 4.362132953240923e-05 | 48.48% | 94.11% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.575004879568788e-05 | 4.373292692384529e-05 | 49.00% | 96.08% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010454208023566119 | 6.156562638246285e-05 | 41.11% | 69.81% | 1.70x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.543392365227746e-05 | 4.317896734813499e-05 | 49.46% | 97.86% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.563294495014055e-05 | 4.3170701183570464e-05 | 49.59% | 98.36% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.52345124228007e-05 | 4.5016604182686124e-05 | 47.19% | 89.34% | 1.89x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.413140355171629e-05 | 4.327025382221728e-05 | 48.57% | 94.43% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.570284702737993e-05 | 4.369747112347386e-05 | 49.01% | 96.13% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.437966306364853e-05 | 4.4307992276916715e-05 | 47.49% | 90.44% | 1.90x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.939638350047847e-05 | 5.6097728189729376e-05 | 43.56% | 77.18% | 1.77x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.639892642670676e-05 | 4.3295747783372554e-05 | 49.89% | 99.56% | 2.00x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.925941344215697e-05 | 5.6956808978717926e-05 | 42.62% | 74.27% | 1.74x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.729867208471305e-05 | 4.5268797299853615e-05 | 48.14% | 92.85% | 1.93x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.361949825862361e-05 | 4.31518588507267e-05 | 48.39% | 93.78% | 1.94x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.361043836369656e-05 | 4.302891913337251e-05 | 48.54% | 94.31% | 1.94x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.465162331215985e-05 | 4.3262615477901934e-05 | 48.89% | 95.67% | 1.96x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.437931429049868e-05 | 4.34754084908258e-05 | 48.48% | 94.09% | 1.94x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.580820272418952e-05 | 4.3781007180040206e-05 | 48.98% | 95.99% | 1.96x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.533535614489775e-05 | 4.385431594944348e-05 | 48.61% | 94.59% | 1.95x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.472223806495198e-05 | 4.414714630220493e-05 | 47.89% | 91.91% | 1.92x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.523777957815978e-05 | 4.455404228589658e-05 | 47.73% | 91.31% | 1.91x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.5511563100343547e-05 | 2.568787012495655e-05 | 43.56% | 77.17% | 1.77x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.3066213193393126e-05 | 2.37537002409026e-05 | 44.84% | 81.30% | 1.81x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.305007149033959e-05 | 2.3303814785932128e-05 | 45.87% | 84.73% | 1.85x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.340731052086812e-05 | 2.355173426890468e-05 | 45.74% | 84.31% | 1.84x | ✅ |
| `hexbytes_new[palindrome]` | 4.295379871486209e-05 | 2.398115099960638e-05 | 44.17% | 79.11% | 1.79x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.412446386609032e-05 | 2.3723960024718487e-05 | 46.23% | 85.99% | 1.86x | ✅ |
| `hexbytes_new[single 0xff]` | 4.319412085307467e-05 | 2.4491996665683377e-05 | 43.30% | 76.36% | 1.76x | ✅ |
| `hexbytes_new[single null byte]` | 4.288828542843743e-05 | 2.3918687467111338e-05 | 44.23% | 79.31% | 1.79x | ✅ |
| `hexbytes_new[two patterns]` | 4.4000226841967e-05 | 2.4569464788937757e-05 | 44.16% | 79.09% | 1.79x | ✅ |
| `hexbytes_repr[0-9]` | 3.429601285576103e-05 | 1.5874648225048208e-05 | 53.71% | 116.04% | 2.16x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.0001241228674043502 | 4.1881208176826344e-05 | 66.26% | 196.37% | 2.96x | ✅ |
| `hexbytes_repr[all byte values]` | 0.0001239967824218187 | 4.1872530190357324e-05 | 66.23% | 196.13% | 2.96x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.386528545850999e-05 | 2.1152206659819286e-05 | 60.73% | 154.66% | 2.55x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 5.3952195977982216e-05 | 2.1026253138093103e-05 | 61.03% | 156.59% | 2.57x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.5180309863296694e-05 | 1.919898214886111e-05 | 57.51% | 135.33% | 2.35x | ✅ |
| `hexbytes_repr[b'']` | 2.5107524692118308e-05 | 1.270980314000651e-05 | 49.38% | 97.54% | 1.98x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 4.122180257004696e-05 | 1.9531592158865477e-05 | 52.62% | 111.05% | 2.11x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 3.2345575653145516e-05 | 1.4885976479741854e-05 | 53.98% | 117.29% | 2.17x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.660618336481391e-05 | 2.4521307497258465e-05 | 63.18% | 171.63% | 2.72x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.00077201783868774 | 0.00022303247905870423 | 71.11% | 246.15% | 3.46x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 3.151545854571115e-05 | 1.4962253285430415e-05 | 52.52% | 110.63% | 2.11x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 3.2566692357353164e-05 | 1.4907216618560647e-05 | 54.23% | 118.46% | 2.18x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.3715563849695766e-05 | 1.553837850081658e-05 | 53.91% | 116.98% | 2.17x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.3773425527665374e-05 | 1.5784832975582848e-05 | 53.26% | 113.96% | 2.14x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 3.2637904443277846e-05 | 1.4851690143476529e-05 | 54.50% | 119.76% | 2.20x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.372260257068064e-05 | 2.1204474201592214e-05 | 60.53% | 153.36% | 2.53x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00040415135008291085 | 0.00012535599838810261 | 68.98% | 222.40% | 3.22x | ✅ |
| `hexbytes_repr[b'abc']` | 3.151576771280103e-05 | 1.5097219187911654e-05 | 52.10% | 108.75% | 2.09x | ✅ |
| `hexbytes_repr[long alternating]` | 0.00040401274416680655 | 0.00012196953706484606 | 69.81% | 231.24% | 3.31x | ✅ |
| `hexbytes_repr[mixed pattern]` | 0.00010221878270628701 | 3.5457011589989245e-05 | 65.31% | 188.29% | 2.88x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.411917093942707e-05 | 1.5645272660465312e-05 | 54.15% | 118.08% | 2.18x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.330100225951404e-05 | 1.5046276229239341e-05 | 54.82% | 121.32% | 2.21x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 3.2872999999691526e-05 | 1.4977166559462619e-05 | 54.44% | 119.49% | 2.19x | ✅ |
| `hexbytes_repr[palindrome]` | 3.690980400836088e-05 | 1.66657740143496e-05 | 54.85% | 121.47% | 2.21x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.688487356563355e-05 | 2.4575632194697767e-05 | 63.26% | 172.16% | 2.72x | ✅ |
| `hexbytes_repr[single 0xff]` | 3.0448688015177823e-05 | 1.4758274267998952e-05 | 51.53% | 106.32% | 2.06x | ✅ |
| `hexbytes_repr[single null byte]` | 3.0460794254274244e-05 | 1.4583916425617732e-05 | 52.12% | 108.87% | 2.09x | ✅ |
| `hexbytes_repr[two patterns]` | 5.410843841461057e-05 | 2.115279373339136e-05 | 60.91% | 155.80% | 2.56x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.701370694860762e-05 | 1.5163571829242523e-05 | 10.87% | 12.20% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.414744265540617e-05 | 4.089113199778293e-05 | 7.38% | 7.96% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.406285826894442e-05 | 4.08726307738879e-05 | 7.24% | 7.81% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.2524754781989706e-05 | 2.0524188569808567e-05 | 8.88% | 9.75% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.246540559058149e-05 | 2.0384537639696326e-05 | 9.26% | 10.21% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.0478358739924474e-05 | 1.854133237349101e-05 | 9.46% | 10.45% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0279710461199313e-05 | 1.2214514134339588e-05 | -18.82% | -15.84% | 0.84x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.893060206586079e-05 | 1.7097223380252693e-05 | 9.68% | 10.72% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.6711268531537128e-05 | 1.4858688128794132e-05 | 11.09% | 12.47% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.62517522158076e-05 | 2.38988340556011e-05 | 8.96% | 9.85% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022596102875774253 | 0.00022338942273080799 | 1.14% | 1.15% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.640954106643577e-05 | 1.4810034818130449e-05 | 9.75% | 10.80% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.6815599875866006e-05 | 1.4960661849427918e-05 | 11.03% | 12.40% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.7135411618668852e-05 | 1.5139829469016615e-05 | 11.65% | 13.18% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.701455534647358e-05 | 1.515948772038394e-05 | 10.90% | 12.24% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.6856582286471372e-05 | 1.4899697530637985e-05 | 11.61% | 13.13% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.2433739213102493e-05 | 2.058272777122508e-05 | 8.25% | 8.99% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012256218613011666 | 0.0001225007230706094 | 0.05% | 0.05% | 1.00x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.6154345859877093e-05 | 1.479233885569828e-05 | 8.43% | 9.21% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012405494788219847 | 0.00012440717888651353 | -0.28% | -0.28% | 1.00x | ❌ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.650800173941806e-05 | 3.448198103848911e-05 | 5.55% | 5.88% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.715479040082979e-05 | 1.5358435255534066e-05 | 10.47% | 11.70% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.725140148775627e-05 | 1.5174147698458999e-05 | 12.04% | 13.69% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.6803948527330165e-05 | 1.4886693728088744e-05 | 11.41% | 12.88% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.7836825003835667e-05 | 1.5973130617527232e-05 | 10.45% | 11.67% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.6915512760049565e-05 | 2.388523022051432e-05 | 11.26% | 12.69% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.599104070300631e-05 | 1.4512717344337766e-05 | 9.24% | 10.19% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.5925011848290335e-05 | 1.4319611566167655e-05 | 10.08% | 11.21% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.2534444929002758e-05 | 2.1138684000217983e-05 | 6.19% | 6.60% | 1.07x | ✅ |
