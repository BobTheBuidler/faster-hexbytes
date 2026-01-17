#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.6627772070027893e-05 | 2.6262781925723135e-05 | 1.37% | 1.39% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.6701791957194747e-05 | 2.6196253194886408e-05 | 1.89% | 1.93% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.643840159215925e-05 | 2.625807731223044e-05 | 0.68% | 0.69% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.638934966752543e-05 | 2.633486101527137e-05 | 0.21% | 0.21% | 1.00x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.6739502274623185e-05 | 2.6224526016401584e-05 | 1.93% | 1.96% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.6831909032360044e-05 | 2.6173520737869195e-05 | 2.45% | 2.52% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.660219242510879e-05 | 2.610525648434385e-05 | 1.87% | 1.90% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.6752513008500098e-05 | 2.6148134622063288e-05 | 2.26% | 2.31% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.6742684708585422e-05 | 2.6130599755437837e-05 | 2.29% | 2.34% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.6822844659369132e-05 | 2.621289598919401e-05 | 2.27% | 2.33% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.6485993948501136e-05 | 2.6217101532304997e-05 | 1.02% | 1.03% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.679980603513482e-05 | 2.6129696451117507e-05 | 2.50% | 2.56% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.6582343032695857e-05 | 2.611198585338692e-05 | 1.77% | 1.80% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.6817833566804707e-05 | 2.6147090927003115e-05 | 2.50% | 2.57% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.669067743655876e-05 | 2.6124721852984128e-05 | 2.12% | 2.17% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.661383002681672e-05 | 2.619067878051858e-05 | 1.59% | 1.62% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.662890210560155e-05 | 2.6112607323321e-05 | 1.94% | 1.98% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.6699101962049694e-05 | 2.633657373079674e-05 | 1.36% | 1.38% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.7013733975583244e-05 | 2.616165489853134e-05 | 3.15% | 3.26% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.6578607524574805e-05 | 2.617963632687658e-05 | 1.50% | 1.52% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.6642574754604648e-05 | 2.6188583673904524e-05 | 1.70% | 1.73% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.6601820767965872e-05 | 2.6204692932567647e-05 | 1.49% | 1.52% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.6622169806252837e-05 | 2.650023478737491e-05 | 0.46% | 0.46% | 1.00x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.654662986742704e-05 | 2.6249267394713192e-05 | 1.12% | 1.13% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.675357303079899e-05 | 2.6189206810734414e-05 | 2.11% | 2.15% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.672082045223331e-05 | 2.622843860194175e-05 | 1.84% | 1.88% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.6060794920552544e-05 | 2.541972284607029e-05 | 2.46% | 2.52% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.6216193061308413e-05 | 2.544828999142171e-05 | 2.93% | 3.02% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.6074070852119004e-05 | 2.5487715002607406e-05 | 2.25% | 2.30% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.6102884888750956e-05 | 2.540956154921564e-05 | 2.66% | 2.73% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.5930330447378866e-05 | 2.577455445938149e-05 | 0.60% | 0.60% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.640105301873156e-05 | 2.583123409630928e-05 | 2.16% | 2.21% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.6240155718594543e-05 | 2.53781123503005e-05 | 3.29% | 3.40% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.624169335569755e-05 | 2.5407558241398978e-05 | 3.18% | 3.28% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.601779534377478e-05 | 2.5801020333801563e-05 | 0.83% | 0.84% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.6150384784686744e-05 | 2.5731638599129314e-05 | 1.60% | 1.63% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.612365663263996e-05 | 2.5642815657833074e-05 | 1.84% | 1.88% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.626891856998321e-05 | 2.56868438390528e-05 | 2.22% | 2.27% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.6356608518830956e-05 | 2.574728620510544e-05 | 2.31% | 2.37% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.603696800720364e-05 | 2.5745956863017638e-05 | 1.12% | 1.13% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.63627725647375e-05 | 2.5748202491239974e-05 | 2.33% | 2.39% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.6253954600402127e-05 | 2.5649805359074715e-05 | 2.30% | 2.36% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.6147227819502886e-05 | 2.5675052744542086e-05 | 1.81% | 1.84% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.61502785508452e-05 | 2.5780818076392026e-05 | 1.41% | 1.43% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.5794763106874956e-05 | 2.545026795611394e-05 | 1.34% | 1.35% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.632984169928067e-05 | 2.578602027129823e-05 | 2.07% | 2.11% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.6052857539814387e-05 | 2.546701403241814e-05 | 2.25% | 2.30% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.6058136319751077e-05 | 2.5877365668062524e-05 | 0.69% | 0.70% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.6199515781634126e-05 | 2.5811562547508732e-05 | 1.48% | 1.50% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.6345798109540058e-05 | 2.571991869564736e-05 | 2.38% | 2.43% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.625119939758981e-05 | 2.5529885829062073e-05 | 2.75% | 2.83% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.6132168237939106e-05 | 2.5899482614800246e-05 | 0.89% | 0.90% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.612978059694309e-05 | 2.5306250523856564e-05 | 3.15% | 3.25% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.6415066808705497e-05 | 2.5468971557179672e-05 | 3.58% | 3.71% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.6010725256928637e-05 | 2.5833180754315715e-05 | 0.68% | 0.69% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.600448609142434e-05 | 2.591701952957717e-05 | 0.34% | 0.34% | 1.00x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.5851980136129194e-05 | 2.5943653223582937e-05 | -0.35% | -0.35% | 1.00x | ❌ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.593488711240955e-05 | 2.584212819089731e-05 | 0.36% | 0.36% | 1.00x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.5879181961844014e-05 | 2.5808794703083235e-05 | 0.27% | 0.27% | 1.00x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.6106100097392964e-05 | 2.580366911266653e-05 | 1.16% | 1.17% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.6262270027011195e-05 | 2.5634080634659813e-05 | 2.39% | 2.45% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.5917787545128594e-05 | 2.589236447495241e-05 | 0.10% | 0.10% | 1.00x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.5905526073437854e-05 | 2.584283998300261e-05 | 0.24% | 0.24% | 1.00x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.598094828113714e-05 | 2.585388137020804e-05 | 0.49% | 0.49% | 1.00x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.6355328955294364e-05 | 2.5861419294917988e-05 | 1.87% | 1.91% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.5734680017603057e-05 | 2.5712902371287475e-05 | 0.08% | 0.08% | 1.00x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.60756259796947e-05 | 2.5865962686738527e-05 | 0.80% | 0.81% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.5804581525569712e-05 | 2.5939525745373604e-05 | -0.52% | -0.52% | 0.99x | ❌ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.6198212745280013e-05 | 2.59422465748508e-05 | 0.98% | 0.99% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.624875140630164e-05 | 2.5812183868563986e-05 | 1.66% | 1.69% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.642186962889643e-05 | 2.591542167636676e-05 | 1.92% | 1.95% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.589383281139548e-05 | 2.5858889539920817e-05 | 0.13% | 0.14% | 1.00x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.599763417229032e-05 | 2.583615787134735e-05 | 0.62% | 0.63% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.6289282803528227e-05 | 2.574145133216256e-05 | 2.08% | 2.13% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.6018984060687372e-05 | 2.5737763428964998e-05 | 1.08% | 1.09% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.5753854432577383e-05 | 2.569002795552163e-05 | 0.25% | 0.25% | 1.00x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.608249869538887e-05 | 2.5820781237124973e-05 | 1.00% | 1.01% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.624347845877984e-05 | 2.5825149305372262e-05 | 1.59% | 1.62% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.599501150081127e-05 | 2.577002597678349e-05 | 0.87% | 0.87% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.6229460772957308e-05 | 2.5781703164971253e-05 | 1.71% | 1.74% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.6217515679609894e-05 | 2.5788877413516355e-05 | 1.63% | 1.66% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.6305423947336858e-05 | 2.5891607012681998e-05 | 1.57% | 1.60% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.6234383026767553e-05 | 2.6067506708298604e-05 | 0.64% | 0.64% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.6135832988627785e-05 | 2.549135931787711e-05 | 2.47% | 2.53% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.6358221698695518e-05 | 2.570933378377392e-05 | 2.46% | 2.52% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.6260099340119653e-05 | 2.5892797288453976e-05 | 1.40% | 1.42% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.6216554712340658e-05 | 2.5763035864192137e-05 | 1.73% | 1.76% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.6142644406848437e-05 | 2.5767133564679576e-05 | 1.44% | 1.46% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.6225304271665837e-05 | 2.5784573390559502e-05 | 1.68% | 1.71% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.6263436692947725e-05 | 2.5796214312318795e-05 | 1.78% | 1.81% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.6021432320939976e-05 | 2.5721993395822565e-05 | 1.15% | 1.16% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.703336794815964e-05 | 2.577741670706457e-05 | 4.65% | 4.87% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.6171631899218075e-05 | 2.578300335290555e-05 | 1.48% | 1.51% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.5914415879861957e-05 | 2.5850806675672398e-05 | 0.25% | 0.25% | 1.00x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.6123706163189197e-05 | 2.572228266294147e-05 | 1.54% | 1.56% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.6093586276460802e-05 | 2.582265653547153e-05 | 1.04% | 1.05% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.6044159346277828e-05 | 2.572557422262443e-05 | 1.22% | 1.24% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.6122345119734486e-05 | 2.5687896930733576e-05 | 1.66% | 1.69% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.66236415863459e-05 | 2.554174067912249e-05 | 4.06% | 4.24% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.590051284853032e-05 | 2.5881067091435277e-05 | 0.08% | 0.08% | 1.00x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.5909170877016566e-05 | 2.582452334153832e-05 | 0.33% | 0.33% | 1.00x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.6261296211958548e-05 | 2.5853481979927616e-05 | 1.55% | 1.58% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.6245024841255084e-05 | 2.5917960258949416e-05 | 1.25% | 1.26% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.5984188576015884e-05 | 2.5718032146043934e-05 | 1.02% | 1.03% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.610682083411274e-05 | 2.5919013025708882e-05 | 0.72% | 0.72% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.6166414532217884e-05 | 2.5446386212788526e-05 | 2.75% | 2.83% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.6103778884963115e-05 | 2.61031733548316e-05 | 0.00% | 0.00% | 1.00x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.6277460145458475e-05 | 2.580577574575021e-05 | 1.80% | 1.83% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.6268124214691714e-05 | 2.5751570320070275e-05 | 1.97% | 2.01% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.625252630128533e-05 | 2.5956657801836452e-05 | 1.13% | 1.14% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.638672673439844e-05 | 2.6001954932355864e-05 | 1.46% | 1.48% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.617858973373961e-05 | 2.5889504026365945e-05 | 1.10% | 1.12% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.6256985293174632e-05 | 2.5673978552996036e-05 | 2.22% | 2.27% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.603908522131947e-05 | 2.6121736607190702e-05 | -0.32% | -0.32% | 1.00x | ❌ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.6074735448583728e-05 | 2.5941274881047074e-05 | 0.51% | 0.51% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.597852255878606e-05 | 2.59185500141202e-05 | 0.23% | 0.23% | 1.00x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.59022000876008e-05 | 2.6030547210128724e-05 | -0.50% | -0.49% | 1.00x | ❌ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.635640257250514e-05 | 2.607315804367059e-05 | 1.07% | 1.09% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.617511544659844e-05 | 2.615189418560149e-05 | 0.09% | 0.09% | 1.00x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.6191470241873924e-05 | 2.6000792034643852e-05 | 0.73% | 0.73% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.6241022070271244e-05 | 2.577871492898257e-05 | 1.76% | 1.79% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.6320968436043596e-05 | 2.5915046344239788e-05 | 1.54% | 1.57% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.5857449734446658e-05 | 2.573255207789738e-05 | 0.48% | 0.49% | 1.00x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.5883681652814976e-05 | 2.5823580207871514e-05 | 0.23% | 0.23% | 1.00x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.612481304508484e-05 | 2.602088103004614e-05 | 0.40% | 0.40% | 1.00x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.6126528150264717e-05 | 2.5779428315842854e-05 | 1.33% | 1.35% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.6194396291622748e-05 | 2.5868325567076103e-05 | 1.24% | 1.26% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.635088339963803e-05 | 2.6238486915812417e-05 | 0.43% | 0.43% | 1.00x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.6156045037649996e-05 | 2.597391529799236e-05 | 0.70% | 0.70% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.5899928533716218e-05 | 2.5686776565914554e-05 | 0.82% | 0.83% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.5953904102877796e-05 | 2.5808857387854434e-05 | 0.56% | 0.56% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.6266038351085405e-05 | 2.559694942790501e-05 | 2.55% | 2.61% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.5881584442985166e-05 | 2.5944466360610117e-05 | -0.24% | -0.24% | 1.00x | ❌ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.6228369306249932e-05 | 2.5489067867359247e-05 | 2.82% | 2.90% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.6260772682033522e-05 | 2.5884681889136696e-05 | 1.43% | 1.45% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.5970322720646817e-05 | 2.588603419576669e-05 | 0.32% | 0.33% | 1.00x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.584905297097968e-05 | 2.543168898488304e-05 | 1.61% | 1.64% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.5970795955980946e-05 | 2.583680367053849e-05 | 0.52% | 0.52% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.611919540208552e-05 | 2.5829479130504192e-05 | 1.11% | 1.12% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.5879523428139893e-05 | 2.585823694212631e-05 | 0.08% | 0.08% | 1.00x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.6025745056686342e-05 | 2.5759036567418515e-05 | 1.02% | 1.04% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.613888012225087e-05 | 2.5802689456805634e-05 | 1.29% | 1.30% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.6314648494932256e-05 | 2.5772484993294474e-05 | 2.06% | 2.10% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.6231393181593176e-05 | 2.5787955914826e-05 | 1.69% | 1.72% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.58578923697412e-05 | 2.558550941958215e-05 | 1.05% | 1.06% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.601906429539836e-05 | 2.5763796174620526e-05 | 0.98% | 0.99% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.602412080193896e-05 | 2.5835477519959063e-05 | 0.72% | 0.73% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.5744696585566385e-05 | 2.5672843081230453e-05 | 0.28% | 0.28% | 1.00x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.615804560952231e-05 | 2.5849142078870207e-05 | 1.18% | 1.20% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.6061709286357058e-05 | 2.5996807539733227e-05 | 0.25% | 0.25% | 1.00x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.5896952400444894e-05 | 2.5854337751997716e-05 | 0.16% | 0.16% | 1.00x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.60691498521866e-05 | 2.5517251690083068e-05 | 2.12% | 2.16% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.5881378690519557e-05 | 2.5815898223414615e-05 | 0.25% | 0.25% | 1.00x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.567054744130059e-05 | 2.572821666581878e-05 | -0.22% | -0.22% | 1.00x | ❌ |
| `hexbytes_getitem_index[5-all byte values]` | 2.607978098576837e-05 | 2.57707398375915e-05 | 1.18% | 1.20% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.5884002611015064e-05 | 2.587832741869038e-05 | 0.02% | 0.02% | 1.00x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.6037832838480528e-05 | 2.5773584335576506e-05 | 1.01% | 1.03% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.582610483675555e-05 | 2.5665209604690676e-05 | 0.62% | 0.63% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.596571270598608e-05 | 2.575726366914658e-05 | 0.80% | 0.81% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.5886878270532993e-05 | 2.587246819605199e-05 | 0.06% | 0.06% | 1.00x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.58417001376176e-05 | 2.5747913734633905e-05 | 0.36% | 0.36% | 1.00x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.607593643265728e-05 | 2.5815204208785982e-05 | 1.00% | 1.01% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.6029515262675647e-05 | 2.574913110306525e-05 | 1.08% | 1.09% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.6064001277427037e-05 | 2.594456189084391e-05 | 0.46% | 0.46% | 1.00x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.6141572835837358e-05 | 2.5862093895839154e-05 | 1.07% | 1.08% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.6197323920425286e-05 | 2.5786587012552184e-05 | 1.57% | 1.59% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.575927292687537e-05 | 2.5778578356412474e-05 | -0.07% | -0.07% | 1.00x | ❌ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.5808902092738427e-05 | 2.5837259459295303e-05 | -0.11% | -0.11% | 1.00x | ❌ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.597212837262903e-05 | 2.5800688908720685e-05 | 0.66% | 0.66% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.606806445746221e-05 | 2.571966382617345e-05 | 1.34% | 1.35% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.603858186636379e-05 | 2.590550737425411e-05 | 0.51% | 0.51% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.570665742977725e-05 | 2.5799986153572188e-05 | -0.36% | -0.36% | 1.00x | ❌ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.151951543524667e-05 | 5.528624421705198e-05 | 32.18% | 47.45% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.128480894525989e-05 | 5.5730066363408025e-05 | 31.44% | 45.85% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.151071092030111e-05 | 5.59933925429146e-05 | 31.31% | 45.57% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.201215997283869e-05 | 5.4915406605734005e-05 | 33.04% | 49.34% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.162798241077973e-05 | 5.529015397147193e-05 | 32.27% | 47.64% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.098273114667768e-05 | 5.5386347262326765e-05 | 31.61% | 46.21% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.850850690649684e-05 | 5.298065070473345e-05 | 32.52% | 48.18% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.184846646540235e-05 | 5.535657148799141e-05 | 32.37% | 47.86% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.193957616623767e-05 | 5.633948079686334e-05 | 31.24% | 45.44% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.137612864271558e-05 | 5.5010958378527285e-05 | 32.40% | 47.93% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.19231812467157e-05 | 5.573045687963875e-05 | 31.97% | 47.00% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.357876768411565e-05 | 5.639559376058717e-05 | 32.52% | 48.20% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.160784874908491e-05 | 5.513112637289998e-05 | 32.44% | 48.02% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.137013523419064e-05 | 5.6042591505475896e-05 | 31.13% | 45.19% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.17177515625056e-05 | 5.543575770277951e-05 | 32.16% | 47.41% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.167446974544609e-05 | 5.532231863894252e-05 | 32.26% | 47.63% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.186347344827856e-05 | 5.604975973587587e-05 | 31.53% | 46.05% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.16614529710591e-05 | 5.641342850547399e-05 | 30.92% | 44.76% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.164673069766355e-05 | 5.631718212024893e-05 | 31.02% | 44.98% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.196362148882872e-05 | 5.58722590696621e-05 | 31.83% | 46.70% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.176930933654429e-05 | 5.605820987990819e-05 | 31.44% | 45.87% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.161971792858973e-05 | 5.576471434425692e-05 | 31.68% | 46.36% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.149877370342411e-05 | 5.5424005014134334e-05 | 31.99% | 47.05% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.15734083483857e-05 | 5.537100828327858e-05 | 32.12% | 47.32% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.222841147598234e-05 | 5.623599082926002e-05 | 31.61% | 46.22% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.088203008070685e-05 | 5.575068289234671e-05 | 31.07% | 45.08% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.850554240964085e-05 | 5.3512021161659114e-05 | 31.84% | 46.71% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.858594501143362e-05 | 5.367127789223753e-05 | 31.70% | 46.42% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.15314560686485e-05 | 5.549978125660013e-05 | 31.93% | 46.90% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.279639740721442e-05 | 5.594708063902067e-05 | 32.43% | 47.99% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.275663378990328e-05 | 5.615705069818899e-05 | 32.14% | 47.37% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.290144951487809e-05 | 5.5411378575377646e-05 | 33.16% | 49.61% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.1739524861045e-05 | 5.613308235582483e-05 | 31.33% | 45.62% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.187241794851906e-05 | 5.678568668582815e-05 | 30.64% | 44.18% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.229469389204367e-05 | 5.670700325833997e-05 | 31.09% | 45.12% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.747115731954154e-05 | 5.3891633203343664e-05 | 30.44% | 43.75% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.27342437189158e-05 | 5.573818365223897e-05 | 32.63% | 48.43% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.233441045040107e-05 | 5.5937735748256194e-05 | 32.06% | 47.19% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.288821651848445e-05 | 5.5911274590945035e-05 | 32.55% | 48.25% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.311852075785101e-05 | 5.6105688126358316e-05 | 32.50% | 48.15% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.174883102478358e-05 | 5.597534849475197e-05 | 31.53% | 46.04% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.301107102440138e-05 | 5.610702324369241e-05 | 32.41% | 47.95% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.21925966321622e-05 | 5.6319259825757325e-05 | 31.48% | 45.94% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.235477192021662e-05 | 5.6579011145200724e-05 | 31.30% | 45.56% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.222401215105649e-05 | 5.635422369117574e-05 | 31.46% | 45.91% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.242379111011084e-05 | 5.640420203272381e-05 | 31.57% | 46.13% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.238979758371789e-05 | 5.573934523111179e-05 | 32.35% | 47.81% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.248752268967195e-05 | 5.5883691036960835e-05 | 32.25% | 47.61% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.283048076261699e-05 | 5.590908970562172e-05 | 32.50% | 48.15% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.238630544900171e-05 | 5.54393522540315e-05 | 32.71% | 48.61% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.330470777279872e-05 | 5.634844393569734e-05 | 32.36% | 47.84% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.302648141479003e-05 | 5.612244945890819e-05 | 32.40% | 47.94% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.263525787082597e-05 | 5.607492698092177e-05 | 32.14% | 47.37% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.257182558687243e-05 | 5.631719426055678e-05 | 31.80% | 46.62% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.224522783360628e-05 | 5.5870328987218156e-05 | 32.07% | 47.21% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 7.874476702596635e-05 | 5.438685312351952e-05 | 30.93% | 44.79% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.936991990539863e-05 | 5.4197141723711424e-05 | 31.72% | 46.45% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.260643277250748e-05 | 5.594138582427272e-05 | 32.28% | 47.67% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.180644297536416e-05 | 5.671951394230643e-05 | 30.67% | 44.23% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.241379149441131e-05 | 5.625153522719514e-05 | 31.74% | 46.51% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.224000093370258e-05 | 5.69038248576849e-05 | 30.81% | 44.52% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.187481725850453e-05 | 5.5661747260232534e-05 | 32.02% | 47.09% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.144318536941911e-05 | 5.627244439248068e-05 | 30.91% | 44.73% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.226109219035195e-05 | 5.648815417106888e-05 | 31.33% | 45.63% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.932071670364841e-05 | 5.424600039474509e-05 | 31.61% | 46.22% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.194140741940458e-05 | 5.608172146853246e-05 | 31.56% | 46.11% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.300206744850027e-05 | 5.627129916990233e-05 | 32.20% | 47.50% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.191984112987585e-05 | 5.590486238935592e-05 | 31.76% | 46.53% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.228842406902108e-05 | 5.640088038977235e-05 | 31.46% | 45.90% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.122021789669304e-05 | 5.6257562860405345e-05 | 30.73% | 44.37% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.19421638188801e-05 | 5.5688029006648306e-05 | 32.04% | 47.15% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.161819220138379e-05 | 5.629106343491948e-05 | 31.03% | 44.99% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.187605883842048e-05 | 5.621628857013075e-05 | 31.34% | 45.64% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.226226566098409e-05 | 5.649193099538926e-05 | 31.33% | 45.62% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.144673042601573e-05 | 5.692426089667595e-05 | 30.11% | 43.08% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.220788959423666e-05 | 5.654729298015429e-05 | 31.21% | 45.38% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.171606419166843e-05 | 5.5762156651183804e-05 | 31.76% | 46.54% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.284252096670793e-05 | 5.8101870076833896e-05 | 29.86% | 42.58% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.163117431737701e-05 | 5.6407947842146015e-05 | 30.90% | 44.72% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.213460938289382e-05 | 5.644714669000843e-05 | 31.27% | 45.51% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.231856987803398e-05 | 5.611511947405361e-05 | 31.83% | 46.70% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.16107221618538e-05 | 5.7070752905608404e-05 | 30.07% | 43.00% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.054372571802303e-05 | 5.62565030848463e-05 | 30.15% | 43.17% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.138508072644383e-05 | 5.687504523007433e-05 | 30.12% | 43.09% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.935375407916848e-05 | 5.468108576260611e-05 | 31.09% | 45.12% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.02673130992683e-05 | 5.4560730240731205e-05 | 32.03% | 47.12% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.096113373046344e-05 | 5.65271622828795e-05 | 30.18% | 43.23% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.045018254806586e-05 | 5.493417109802901e-05 | 31.72% | 46.45% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.168351601591488e-05 | 5.5033894725367776e-05 | 32.63% | 48.42% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.197504638428961e-05 | 5.490576444236549e-05 | 33.02% | 49.30% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.297730131397352e-05 | 5.520584665485871e-05 | 33.47% | 50.31% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.269199583566039e-05 | 5.49160896244667e-05 | 33.59% | 50.58% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.135454521784293e-05 | 5.449691788876475e-05 | 33.01% | 49.28% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.740469481696054e-05 | 5.3540302236708485e-05 | 30.83% | 44.57% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.200001433645124e-05 | 5.480912419805679e-05 | 33.16% | 49.61% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.111722650716131e-05 | 5.6035330483032814e-05 | 30.92% | 44.76% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.246458715420247e-05 | 5.516016741761752e-05 | 33.11% | 49.50% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010340927481613943 | 7.397126459423845e-05 | 28.47% | 39.80% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.723436548417385e-05 | 5.395060038104792e-05 | 30.15% | 43.16% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.09620207946229e-05 | 5.559791874690283e-05 | 31.33% | 45.62% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.206311626320638e-05 | 5.580360392578318e-05 | 32.00% | 47.06% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.110334827139667e-05 | 5.522237651501548e-05 | 31.91% | 46.87% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.117092820899184e-05 | 5.553777980811744e-05 | 31.58% | 46.15% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.163112248822478e-05 | 5.544609473765297e-05 | 32.08% | 47.23% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.526891832990586e-05 | 6.9097744892519e-05 | 27.47% | 37.88% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.690288161701628e-05 | 5.294533870928083e-05 | 31.15% | 45.25% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.782085346840269e-05 | 6.828785285644521e-05 | 30.19% | 43.25% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.212477747904539e-05 | 5.518200572210726e-05 | 32.81% | 48.83% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.0855246732612e-05 | 5.470654725504544e-05 | 32.34% | 47.80% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.138558210785993e-05 | 5.466153016188164e-05 | 32.84% | 48.89% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.060842839321677e-05 | 5.52359390465922e-05 | 31.48% | 45.93% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.24614772939911e-05 | 5.506581908016163e-05 | 33.22% | 49.75% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.232216884686763e-05 | 5.475244315540288e-05 | 33.49% | 50.35% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.849446434901961e-05 | 5.3640804635208616e-05 | 31.66% | 46.33% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.740696135864902e-05 | 5.349182211242285e-05 | 30.90% | 44.71% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.339395085786451e-05 | 5.4733079233561606e-05 | 34.37% | 52.36% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.84835509968369e-05 | 5.3575268097564e-05 | 31.74% | 46.49% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.130257862559895e-05 | 5.445854756045903e-05 | 33.02% | 49.29% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.147841502766925e-05 | 5.471365803340696e-05 | 32.85% | 48.92% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 7.988789898960711e-05 | 5.3766912672706345e-05 | 32.70% | 48.58% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 7.974240537520512e-05 | 5.353341686117605e-05 | 32.87% | 48.96% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.91995563412471e-05 | 5.313426411158352e-05 | 32.91% | 49.06% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.669748376724806e-05 | 5.269682589355331e-05 | 31.29% | 45.54% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.95521942754188e-05 | 5.263957353653046e-05 | 33.83% | 51.13% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.940086873626957e-05 | 5.348973438723856e-05 | 32.63% | 48.44% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.038077319715135e-05 | 5.328787705157551e-05 | 33.71% | 50.84% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.0001001422985894233 | 7.279278205274543e-05 | 27.31% | 37.57% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 7.940814878767677e-05 | 5.415608373052859e-05 | 31.80% | 46.63% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.902650918924867e-05 | 5.370543439822014e-05 | 32.04% | 47.15% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.884009227953906e-05 | 5.353005200249467e-05 | 32.10% | 47.28% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.885713980231769e-05 | 5.3691477858599036e-05 | 31.91% | 46.87% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.904099329763722e-05 | 5.3464979062568975e-05 | 32.36% | 47.84% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.960056633951737e-05 | 5.2964231832677956e-05 | 33.46% | 50.29% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.649541242956246e-05 | 6.652989051807402e-05 | 31.05% | 45.04% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.975719297281554e-05 | 5.429381070439708e-05 | 31.93% | 46.90% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.480507961369436e-05 | 6.648492760219241e-05 | 29.87% | 42.60% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.024437231357896e-05 | 5.309783326876964e-05 | 33.83% | 51.13% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.857456788438878e-05 | 5.371867526241148e-05 | 31.63% | 46.27% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 8.077756143381169e-05 | 5.312789901765051e-05 | 34.23% | 52.04% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.911944093993516e-05 | 5.338288531285728e-05 | 32.53% | 48.21% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.910257746888409e-05 | 5.362005304653202e-05 | 32.21% | 47.52% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 8.030711778554173e-05 | 5.3431041837639646e-05 | 33.47% | 50.30% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.647023855873973e-05 | 5.279173946640357e-05 | 30.96% | 44.85% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.636620245148313e-05 | 5.182168132330983e-05 | 32.14% | 47.36% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.900715671320006e-05 | 5.353883582619947e-05 | 32.24% | 47.57% | 1.48x | ✅ |
| `hexbytes_new['']` | 7.20583116396614e-05 | 2.8995198601993893e-05 | 59.76% | 148.52% | 2.49x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 8.823269424888408e-05 | 4.3828196569600665e-05 | 50.33% | 101.31% | 2.01x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.036807485431747e-05 | 4.40611406944309e-05 | 51.24% | 105.10% | 2.05x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.546662697984993e-05 | 4.1613574577616825e-05 | 51.31% | 105.38% | 2.05x | ✅ |
| `hexbytes_new['0x']` | 7.5452849971628e-05 | 2.8750088661458625e-05 | 61.90% | 162.44% | 2.62x | ✅ |
| `hexbytes_new['0x1234']` | 8.350378538725628e-05 | 3.907810248706711e-05 | 53.20% | 113.68% | 2.14x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.448987260098432e-05 | 3.898621546222273e-05 | 53.86% | 116.72% | 2.17x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.254349175476363e-05 | 3.926260788770802e-05 | 52.43% | 110.23% | 2.10x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.388654460556902e-05 | 3.880738240177737e-05 | 53.74% | 116.16% | 2.16x | ✅ |
| `hexbytes_new['abc']` | 8.235126712954963e-05 | 4.17147883487798e-05 | 49.35% | 97.42% | 1.97x | ✅ |
| `hexbytes_new['deadbeef']` | 7.625831141228355e-05 | 3.59719404642621e-05 | 52.83% | 111.99% | 2.12x | ✅ |
| `hexbytes_new[0-9]` | 4.2169072367392016e-05 | 2.4598457298591176e-05 | 41.67% | 71.43% | 1.71x | ✅ |
| `hexbytes_new[0]` | 0.0001188759860893553 | 3.7699001352321656e-05 | 68.29% | 215.33% | 3.15x | ✅ |
| `hexbytes_new[123456]` | 0.00012483373029311464 | 3.8002387198114174e-05 | 69.56% | 228.49% | 3.28x | ✅ |
| `hexbytes_new[2**16]` | 0.0001275137357619983 | 3.778687169424222e-05 | 70.37% | 237.46% | 3.37x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00012898202524642036 | 4.6230709287550056e-05 | 64.16% | 179.00% | 2.79x | ✅ |
| `hexbytes_new[2**32]` | 0.00013053667430863112 | 4.084577459484888e-05 | 68.71% | 219.58% | 3.20x | ✅ |
| `hexbytes_new[2**64]` | 0.0001279395264232923 | 4.3831067233912523e-05 | 65.74% | 191.89% | 2.92x | ✅ |
| `hexbytes_new[2**8]` | 0.0001255118934395425 | 3.8281721561461895e-05 | 69.50% | 227.86% | 3.28x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.4090133094576924e-05 | 2.5513583256825688e-05 | 42.13% | 72.81% | 1.73x | ✅ |
| `hexbytes_new[False]` | 6.034611592474199e-05 | 2.5456983065343805e-05 | 57.82% | 137.05% | 2.37x | ✅ |
| `hexbytes_new[True]` | 6.033507510345796e-05 | 2.5864942502741226e-05 | 57.13% | 133.27% | 2.33x | ✅ |
| `hexbytes_new[all byte values]` | 4.345441581437294e-05 | 2.546228021452202e-05 | 41.40% | 70.66% | 1.71x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.296774435691697e-05 | 2.6153797186739986e-05 | 39.13% | 64.29% | 1.64x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.2741930716311e-05 | 2.6032490384719835e-05 | 39.09% | 64.19% | 1.64x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.192294492290064e-05 | 2.4810990799679597e-05 | 40.82% | 68.97% | 1.69x | ✅ |
| `hexbytes_new[b'']` | 4.191585355419249e-05 | 2.50657455778545e-05 | 40.20% | 67.22% | 1.67x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.2465880796648746e-05 | 2.4436043430959744e-05 | 42.46% | 73.78% | 1.74x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.3045115646301955e-05 | 2.4387461992949778e-05 | 43.34% | 76.51% | 1.77x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.288762287639881e-05 | 2.5797383134933746e-05 | 39.85% | 66.25% | 1.66x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.445165447737241e-05 | 3.739105107375635e-05 | 31.33% | 45.63% | 1.46x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.2598429602353116e-05 | 2.4589295136673135e-05 | 42.28% | 73.24% | 1.73x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.2121657010191835e-05 | 2.4750271732975787e-05 | 41.24% | 70.19% | 1.70x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.277484803766959e-05 | 2.4411649430383064e-05 | 42.93% | 75.22% | 1.75x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.26861793636162e-05 | 2.4595870765559153e-05 | 42.38% | 73.55% | 1.74x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.2964699145182426e-05 | 2.4504300287899934e-05 | 42.97% | 75.34% | 1.75x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.3302601711562107e-05 | 2.5516424237056154e-05 | 41.07% | 69.70% | 1.70x | ✅ |
| `hexbytes_new[b'a'*1024]` | 4.9867811258797656e-05 | 3.093218218704406e-05 | 37.97% | 61.22% | 1.61x | ✅ |
| `hexbytes_new[b'abc']` | 4.246699300531316e-05 | 2.4713355065579398e-05 | 41.81% | 71.84% | 1.72x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.74299736915563e-05 | 3.41631453193127e-05 | 49.34% | 97.38% | 1.97x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.969536159370741e-05 | 3.5790169827936234e-05 | 48.65% | 94.73% | 1.95x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.92894447452109e-05 | 3.5774481177583645e-05 | 48.37% | 93.68% | 1.94x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.924753652605886e-05 | 3.4458710448905795e-05 | 50.24% | 100.96% | 2.01x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.862556721458597e-05 | 3.497450280783102e-05 | 49.04% | 96.22% | 1.96x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.735545266725923e-05 | 3.430817207966208e-05 | 49.06% | 96.32% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.632674526495472e-05 | 3.27506643357727e-05 | 50.62% | 102.52% | 2.03x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.81696792862116e-05 | 3.436989939006233e-05 | 49.58% | 98.34% | 1.98x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.731895989299408e-05 | 3.400867721553718e-05 | 49.48% | 97.95% | 1.98x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.681635269126822e-05 | 3.461452773364895e-05 | 48.19% | 93.03% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 8.818641323974461e-05 | 5.3136582018190554e-05 | 39.75% | 65.96% | 1.66x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.587497976833347e-05 | 3.450410350279156e-05 | 47.62% | 90.92% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.82290120880122e-05 | 3.3986896305645016e-05 | 50.19% | 100.75% | 2.01x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.722112762814929e-05 | 3.400776612943082e-05 | 49.41% | 97.66% | 1.98x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.779078944772732e-05 | 3.402722410346424e-05 | 49.81% | 99.23% | 1.99x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.751398807153346e-05 | 3.394139264135818e-05 | 49.73% | 98.91% | 1.99x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.49629607898706e-05 | 3.4646022056791194e-05 | 46.67% | 87.50% | 1.88x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.348461089502741e-05 | 4.592924741030792e-05 | 44.98% | 81.77% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.819875273218321e-05 | 3.449796731976922e-05 | 49.42% | 97.69% | 1.98x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.399151016207075e-05 | 4.619702471584189e-05 | 45.00% | 81.81% | 1.82x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.777783019381143e-05 | 3.481319888892291e-05 | 48.64% | 94.69% | 1.95x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.695748121328596e-05 | 3.43715684255326e-05 | 48.67% | 94.80% | 1.95x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.742688188049128e-05 | 3.4130649829712e-05 | 49.38% | 97.56% | 1.98x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.746776371402698e-05 | 3.440314943167406e-05 | 49.01% | 96.11% | 1.96x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.852681450241824e-05 | 3.424225835764429e-05 | 50.03% | 100.12% | 2.00x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.890209886797933e-05 | 3.635458964329098e-05 | 47.24% | 89.53% | 1.90x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.759134502792673e-05 | 3.4914847799969474e-05 | 48.34% | 93.59% | 1.94x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.899655453829212e-05 | 3.5015237478364565e-05 | 49.25% | 97.05% | 1.97x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.945953216910086e-05 | 3.47961913561872e-05 | 49.90% | 99.62% | 2.00x | ✅ |
| `hexbytes_new[long alternating]` | 4.927652546177608e-05 | 3.1015829646129595e-05 | 37.06% | 58.88% | 1.59x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.374498000015271e-05 | 4.3022896437643974e-05 | 48.63% | 94.65% | 1.95x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.52185539061617e-05 | 4.4346598279254316e-05 | 47.96% | 92.16% | 1.92x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.642746933112681e-05 | 4.4376281725850565e-05 | 48.65% | 94.76% | 1.95x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.52502199669681e-05 | 4.373874312864222e-05 | 48.69% | 94.91% | 1.95x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.444473395869866e-05 | 4.432044937580608e-05 | 47.52% | 90.53% | 1.91x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.408678268381455e-05 | 4.299478593249356e-05 | 48.87% | 95.57% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.286473066856317e-05 | 4.1109112830329995e-05 | 50.39% | 101.57% | 2.02x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.334160289034687e-05 | 4.3349905752796686e-05 | 47.99% | 92.25% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.559450609635685e-05 | 4.2692361260853796e-05 | 50.12% | 100.49% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.501015102425608e-05 | 4.403118884595168e-05 | 48.20% | 93.07% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010401638157747578 | 6.256710881950149e-05 | 39.85% | 66.25% | 1.66x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.383077229048787e-05 | 4.286727601197973e-05 | 48.86% | 95.56% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.401466529596186e-05 | 4.272330596691355e-05 | 49.15% | 96.65% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.359559512221556e-05 | 4.287540149022934e-05 | 48.71% | 94.97% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.41179572230054e-05 | 4.328232328943791e-05 | 48.55% | 94.35% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.391337869431932e-05 | 4.2709807683284465e-05 | 49.10% | 96.47% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.504946444282841e-05 | 4.3752291182912455e-05 | 48.56% | 94.39% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 0.00010013262989040907 | 5.5492357013504714e-05 | 44.58% | 80.44% | 1.80x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.490979411246637e-05 | 4.262325914050285e-05 | 49.80% | 99.21% | 1.99x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.82701381925219e-05 | 5.721786194789718e-05 | 41.77% | 71.75% | 1.72x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.495260430029388e-05 | 4.366408882557249e-05 | 48.60% | 94.56% | 1.95x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.397595966868681e-05 | 4.274819062026222e-05 | 49.09% | 96.44% | 1.96x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.401458313801346e-05 | 4.300625793500639e-05 | 48.81% | 95.35% | 1.95x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.456420300079377e-05 | 4.315629942137226e-05 | 48.97% | 95.95% | 1.96x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.410339942451074e-05 | 4.339294858949516e-05 | 48.41% | 93.82% | 1.94x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.453636702264878e-05 | 4.356845511031032e-05 | 48.46% | 94.03% | 1.94x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.36751493276884e-05 | 4.359982579128927e-05 | 47.89% | 91.92% | 1.92x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.367647022781901e-05 | 4.511893486617126e-05 | 46.08% | 85.46% | 1.85x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.543142252872145e-05 | 4.386361339959186e-05 | 48.66% | 94.77% | 1.95x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.2588314772882306e-05 | 2.487091790552403e-05 | 41.60% | 71.24% | 1.71x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.2371372474189605e-05 | 2.4575504816059453e-05 | 42.00% | 72.41% | 1.72x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.201969160732572e-05 | 2.4592895567292018e-05 | 41.47% | 70.86% | 1.71x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.2843909920565066e-05 | 2.506584117701269e-05 | 41.49% | 70.93% | 1.71x | ✅ |
| `hexbytes_new[palindrome]` | 4.223034532410491e-05 | 2.4683996370294926e-05 | 41.55% | 71.08% | 1.71x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.261516914098824e-05 | 2.5338430087439316e-05 | 40.54% | 68.18% | 1.68x | ✅ |
| `hexbytes_new[single 0xff]` | 4.2410604516910714e-05 | 2.8336550203525e-05 | 33.19% | 49.67% | 1.50x | ✅ |
| `hexbytes_new[single null byte]` | 4.223023453120141e-05 | 2.5363809707459218e-05 | 39.94% | 66.50% | 1.66x | ✅ |
| `hexbytes_new[two patterns]` | 4.457481063946844e-05 | 2.753528224154271e-05 | 38.23% | 61.88% | 1.62x | ✅ |
| `hexbytes_repr[0-9]` | 3.3807105950448566e-05 | 1.584605870606483e-05 | 53.13% | 113.35% | 2.13x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012409219549222705 | 4.153204758914032e-05 | 66.53% | 198.79% | 2.99x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00012392926625666952 | 4.176441158838591e-05 | 66.30% | 196.73% | 2.97x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.40825627626384e-05 | 2.1217763657362918e-05 | 60.77% | 154.89% | 2.55x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 5.4233952051261314e-05 | 2.108404724290918e-05 | 61.12% | 157.23% | 2.57x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.504633181087191e-05 | 1.9249474683569573e-05 | 57.27% | 134.01% | 2.34x | ✅ |
| `hexbytes_repr[b'']` | 2.5164614625890813e-05 | 1.2461091576353474e-05 | 50.48% | 101.95% | 2.02x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 4.1453460629810355e-05 | 1.7808353627560583e-05 | 57.04% | 132.78% | 2.33x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 3.2141387323918716e-05 | 1.4872672266462022e-05 | 53.73% | 116.11% | 2.16x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.657747458129829e-05 | 2.4624374328542606e-05 | 63.01% | 170.37% | 2.70x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007689594709496925 | 0.00022288384891787848 | 71.01% | 245.00% | 3.45x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 3.1466641732052995e-05 | 1.498590109562311e-05 | 52.38% | 109.97% | 2.10x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 3.265574526670509e-05 | 1.498657616878377e-05 | 54.11% | 117.90% | 2.18x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.330065752965313e-05 | 1.5613292268172677e-05 | 53.11% | 113.28% | 2.13x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.3499381301241895e-05 | 1.552309823702653e-05 | 53.66% | 115.80% | 2.16x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 3.2131284822152315e-05 | 1.4875043473549814e-05 | 53.71% | 116.01% | 2.16x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.376736650338194e-05 | 2.1185703505114204e-05 | 60.60% | 153.79% | 2.54x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.0004035779899526456 | 0.00012208837190911807 | 69.75% | 230.56% | 3.31x | ✅ |
| `hexbytes_repr[b'abc']` | 3.158839805174728e-05 | 1.4819102775526767e-05 | 53.09% | 113.16% | 2.13x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0004023160659697341 | 0.00012243487277685398 | 69.57% | 228.60% | 3.29x | ✅ |
| `hexbytes_repr[mixed pattern]` | 0.00010345990518196947 | 3.5375072576188175e-05 | 65.81% | 192.47% | 2.92x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.402213412639152e-05 | 1.5761079733251916e-05 | 53.67% | 115.86% | 2.16x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.314277132562367e-05 | 1.5271406174061192e-05 | 53.92% | 117.03% | 2.17x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 3.240958837486869e-05 | 1.5347412252051693e-05 | 52.65% | 111.17% | 2.11x | ✅ |
| `hexbytes_repr[palindrome]` | 3.6857108498193736e-05 | 1.6694602021917628e-05 | 54.70% | 120.77% | 2.21x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.668493785576932e-05 | 2.4756032566067286e-05 | 62.88% | 169.37% | 2.69x | ✅ |
| `hexbytes_repr[single 0xff]` | 3.0319924510127625e-05 | 1.4525686483759185e-05 | 52.09% | 108.73% | 2.09x | ✅ |
| `hexbytes_repr[single null byte]` | 3.0460427256908394e-05 | 1.4634492573911625e-05 | 51.96% | 108.14% | 2.08x | ✅ |
| `hexbytes_repr[two patterns]` | 5.410059636292608e-05 | 2.1315140535870483e-05 | 60.60% | 153.81% | 2.54x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.7173761477253245e-05 | 1.5246634818479938e-05 | 11.22% | 12.64% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.318924472388457e-05 | 4.06821665664816e-05 | 5.80% | 6.16% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.315166889657205e-05 | 4.0667904388798906e-05 | 5.76% | 6.11% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.240839339259107e-05 | 2.0393281147240545e-05 | 8.99% | 9.88% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.2434612353640518e-05 | 2.032516554221784e-05 | 9.40% | 10.38% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.036956475186397e-05 | 1.8305019847869694e-05 | 10.14% | 11.28% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0221515199226093e-05 | 1.195395721132156e-05 | -16.95% | -14.49% | 0.86x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.8946940320476612e-05 | 1.7133935357439502e-05 | 9.57% | 10.58% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.667647325103636e-05 | 1.455905013970741e-05 | 12.70% | 14.54% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.617505681605571e-05 | 2.4009900642969512e-05 | 8.27% | 9.02% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022538053204743978 | 0.00022261794974512652 | 1.23% | 1.24% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.6140683833120922e-05 | 1.4776999532034555e-05 | 8.45% | 9.23% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.666674097644062e-05 | 1.4504306834782775e-05 | 12.97% | 14.91% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.6958406266940858e-05 | 1.5005843333042795e-05 | 11.51% | 13.01% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.6915137026644954e-05 | 1.5090944369429509e-05 | 10.78% | 12.09% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.668561876059605e-05 | 1.4461792748525408e-05 | 13.33% | 15.38% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.2397107203301218e-05 | 2.0342290427226833e-05 | 9.17% | 10.10% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.0001241982969411318 | 0.00012157540188290442 | 2.11% | 2.16% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.6114909609191888e-05 | 1.4564527647277979e-05 | 9.62% | 10.64% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012413033491234646 | 0.00012184582337026823 | 1.84% | 1.87% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.672532597844876e-05 | 3.43586215140311e-05 | 6.44% | 6.89% | 1.07x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.714986400305131e-05 | 1.5143194882932248e-05 | 11.70% | 13.25% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.6856841373538328e-05 | 1.4750785606936166e-05 | 12.49% | 14.28% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.6760440978989512e-05 | 1.460905748831766e-05 | 12.84% | 14.73% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.7804526955904548e-05 | 1.585482104172305e-05 | 10.95% | 12.30% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.614237838413114e-05 | 2.3896382535459976e-05 | 8.59% | 9.40% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.580473297463742e-05 | 1.4306633210221765e-05 | 9.48% | 10.47% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.5872151161425526e-05 | 1.4235532068904216e-05 | 10.31% | 11.50% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.2436628612830646e-05 | 2.0444741786264483e-05 | 8.88% | 9.74% | 1.10x | ✅ |
