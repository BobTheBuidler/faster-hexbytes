#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.6796574266959004e-05 | 2.525978753899425e-05 | 5.74% | 6.08% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.6990131156343995e-05 | 2.536948761884312e-05 | 6.00% | 6.39% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.6767235992985194e-05 | 2.5341750292721188e-05 | 5.33% | 5.63% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.6830787677157862e-05 | 2.5349080927087528e-05 | 5.52% | 5.85% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.674102867391692e-05 | 2.5285123718119096e-05 | 5.44% | 5.76% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.6942935977022315e-05 | 2.53053270000493e-05 | 6.08% | 6.47% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.698059707692503e-05 | 2.4549053951767304e-05 | 9.01% | 9.90% | 1.10x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.6838730322659976e-05 | 2.537374933588942e-05 | 5.46% | 5.77% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.6796459099255197e-05 | 2.5356832717364473e-05 | 5.37% | 5.68% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.6661542330185373e-05 | 2.5318002304042825e-05 | 5.04% | 5.31% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.681754950346339e-05 | 2.5506825536521256e-05 | 4.89% | 5.14% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6544108746546445e-05 | 2.5168208888006644e-05 | 5.18% | 5.47% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.673067703826683e-05 | 2.5352577481512862e-05 | 5.16% | 5.44% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.6767400462635044e-05 | 2.529126734330591e-05 | 5.51% | 5.84% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.6718868903579977e-05 | 2.538235121743874e-05 | 5.00% | 5.27% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.6962565944578267e-05 | 2.536808659033799e-05 | 5.91% | 6.29% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.702281919753524e-05 | 2.5444278663494402e-05 | 5.84% | 6.20% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.701568850487982e-05 | 2.5954531865197645e-05 | 3.93% | 4.09% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.69375901881152e-05 | 2.52750429804181e-05 | 6.17% | 6.58% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.6940256683762813e-05 | 2.527877580194597e-05 | 6.17% | 6.57% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.685111172028996e-05 | 2.5707644660380375e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.6762802969364653e-05 | 2.5317619683047716e-05 | 5.40% | 5.71% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.689691959655761e-05 | 2.565508518177638e-05 | 4.62% | 4.84% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.6931403726812923e-05 | 2.518117531492153e-05 | 6.50% | 6.95% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.6863903573242703e-05 | 2.539819387488602e-05 | 5.46% | 5.77% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.6728538407248888e-05 | 2.528791586924108e-05 | 5.39% | 5.70% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.59891668183512e-05 | 2.424726554416964e-05 | 6.70% | 7.18% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.600759943563209e-05 | 2.4130961978101e-05 | 7.22% | 7.78% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.59720489404755e-05 | 2.4183560688235283e-05 | 6.89% | 7.40% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.6838746248146864e-05 | 2.4197368998992425e-05 | 9.84% | 10.92% | 1.11x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.6187766048232476e-05 | 2.4902771527248383e-05 | 4.91% | 5.16% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.6040093000628047e-05 | 2.490536525185086e-05 | 4.36% | 4.56% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.6252484401452278e-05 | 2.4227515767287193e-05 | 7.71% | 8.36% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.601952738741441e-05 | 2.4079867322831242e-05 | 7.45% | 8.06% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.6250698662177853e-05 | 2.4877415759172108e-05 | 5.23% | 5.52% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.5991231458790847e-05 | 2.4922565028886377e-05 | 4.11% | 4.29% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.6090069168877886e-05 | 2.4874495783947495e-05 | 4.66% | 4.89% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6295935408689015e-05 | 2.485294954555985e-05 | 5.49% | 5.81% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.6142765804524074e-05 | 2.4984155216430153e-05 | 4.43% | 4.64% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.6264314873554125e-05 | 2.4991565253336784e-05 | 4.85% | 5.09% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.6346950411481728e-05 | 2.4847052117550084e-05 | 5.69% | 6.04% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.6064303446294682e-05 | 2.495616681646576e-05 | 4.25% | 4.44% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.6047583715395213e-05 | 2.4900727841977506e-05 | 4.40% | 4.61% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.594845782669468e-05 | 2.4905552015905628e-05 | 4.02% | 4.19% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.6218225124645602e-05 | 2.4206548388685514e-05 | 7.67% | 8.31% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.5972428563454813e-05 | 2.481579323943557e-05 | 4.45% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.598186987220425e-05 | 2.423903313504627e-05 | 6.71% | 7.19% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.598150885303908e-05 | 2.4971057394623568e-05 | 3.89% | 4.05% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.6099279672890053e-05 | 2.4880189607348487e-05 | 4.67% | 4.90% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.6191842364880225e-05 | 2.487194022495117e-05 | 5.04% | 5.31% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.583858040787204e-05 | 2.396169925344648e-05 | 7.26% | 7.83% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.6145310704806543e-05 | 2.4794926476778386e-05 | 5.16% | 5.45% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.5905307458826035e-05 | 2.414107960534344e-05 | 6.81% | 7.31% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.596248479192148e-05 | 2.4141295746092754e-05 | 7.01% | 7.54% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.6102236987162203e-05 | 2.4884346075561963e-05 | 4.67% | 4.89% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.6194773297597404e-05 | 2.487434767391544e-05 | 5.04% | 5.31% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.6079956942742423e-05 | 2.477035603335466e-05 | 5.02% | 5.29% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.639324696300405e-05 | 2.5005938146988607e-05 | 5.26% | 5.55% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.6383580962000375e-05 | 2.4893534649286815e-05 | 5.65% | 5.99% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.610461696429059e-05 | 2.4909952073152976e-05 | 4.58% | 4.80% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.575344156422316e-05 | 2.4088213144096303e-05 | 6.47% | 6.91% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.593715501757273e-05 | 2.4897769502176913e-05 | 4.01% | 4.17% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.6305890516017585e-05 | 2.485183889450393e-05 | 5.53% | 5.85% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.613608161391582e-05 | 2.487635173939704e-05 | 4.82% | 5.06% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.5911777118900473e-05 | 2.4988655219788526e-05 | 3.56% | 3.69% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6050140277249932e-05 | 2.502719332663882e-05 | 3.93% | 4.09% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.541231129705223e-05 | 2.48818634372262e-05 | 2.09% | 2.13% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.6027658502157154e-05 | 2.5011349335167085e-05 | 3.90% | 4.06% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.607489046903662e-05 | 2.4971294557693604e-05 | 4.23% | 4.42% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.6028140686225316e-05 | 2.6499614129505782e-05 | -1.81% | -1.78% | 0.98x | ❌ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.5830158595746157e-05 | 2.4928894749832025e-05 | 3.49% | 3.62% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.5827600534224395e-05 | 2.482777649970316e-05 | 3.87% | 4.03% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.625955558269052e-05 | 2.500135460148067e-05 | 4.79% | 5.03% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.608157806938039e-05 | 2.479320245791925e-05 | 4.94% | 5.20% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.608758970213974e-05 | 2.4865413224697248e-05 | 4.68% | 4.92% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.628478931525794e-05 | 2.482006262189331e-05 | 5.57% | 5.90% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.6063482488995488e-05 | 2.5003595087141505e-05 | 4.07% | 4.24% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.611664826634793e-05 | 2.49319921245165e-05 | 4.54% | 4.75% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.6242033770035603e-05 | 2.4884711027231983e-05 | 5.17% | 5.45% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.6105420838544197e-05 | 2.4852184797556626e-05 | 4.80% | 5.04% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.6257322635554747e-05 | 2.4960664439178202e-05 | 4.94% | 5.19% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.6079817944587562e-05 | 2.503023666683049e-05 | 4.02% | 4.19% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.6068075325534457e-05 | 2.5024692580202647e-05 | 4.00% | 4.17% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.6744350654495617e-05 | 2.4359710554832985e-05 | 8.92% | 9.79% | 1.10x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.6067991107238292e-05 | 2.4985828397290708e-05 | 4.15% | 4.33% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.6442356797691075e-05 | 2.489427920946786e-05 | 5.85% | 6.22% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.616260841048687e-05 | 2.426244697981477e-05 | 7.26% | 7.83% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.6017096626608064e-05 | 2.4555942761474937e-05 | 5.62% | 5.95% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.609989261892771e-05 | 2.4799752242814488e-05 | 4.98% | 5.24% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.610088590687756e-05 | 2.504009503499391e-05 | 4.06% | 4.24% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.6117738268191827e-05 | 2.49370188781575e-05 | 4.52% | 4.73% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.614251166404829e-05 | 2.4985223961315245e-05 | 4.43% | 4.63% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.604025773015774e-05 | 2.5090226007888472e-05 | 3.65% | 3.79% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.6228780002855796e-05 | 2.499513628616121e-05 | 4.70% | 4.94% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.607818323910438e-05 | 2.4863508460797126e-05 | 4.66% | 4.89% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.6225047170248942e-05 | 2.4934137012655896e-05 | 4.92% | 5.18% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.6049717387898635e-05 | 2.4984677862478832e-05 | 4.09% | 4.26% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.622101647685334e-05 | 2.487040005499516e-05 | 5.15% | 5.43% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.6093424387936315e-05 | 2.4380782051403868e-05 | 6.56% | 7.02% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.643399097878479e-05 | 2.4992762757952113e-05 | 5.45% | 5.77% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.6132834245717395e-05 | 2.4974531120371674e-05 | 4.43% | 4.64% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.6332556204339054e-05 | 2.4935542084177325e-05 | 5.31% | 5.60% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.606704476804308e-05 | 2.5032913135088925e-05 | 3.97% | 4.13% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.6074737350420306e-05 | 2.4997156704646954e-05 | 4.13% | 4.31% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.6164105076085554e-05 | 2.4730519845676815e-05 | 5.48% | 5.80% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.6192121322261234e-05 | 2.4410387896088346e-05 | 6.80% | 7.30% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.621606906991189e-05 | 2.5057380267096932e-05 | 4.42% | 4.62% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.6007678503244695e-05 | 2.4982789248862516e-05 | 3.94% | 4.10% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.5817815907864146e-05 | 2.504387935941208e-05 | 3.00% | 3.09% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.614224403174758e-05 | 2.4979282645664478e-05 | 4.45% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.618805194048246e-05 | 2.5002317856300287e-05 | 4.53% | 4.74% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.6256730212031524e-05 | 2.5066195117075068e-05 | 4.53% | 4.75% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.6172544015532996e-05 | 2.442259548231532e-05 | 6.69% | 7.17% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.6180872595352217e-05 | 2.5004413914969495e-05 | 4.49% | 4.71% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.612959909645284e-05 | 2.495497484636124e-05 | 4.50% | 4.71% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.6129164054759483e-05 | 2.511427973522687e-05 | 3.88% | 4.04% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.622665492603268e-05 | 2.4953902501452718e-05 | 4.85% | 5.10% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.610846132861607e-05 | 2.498232719750112e-05 | 4.31% | 4.51% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.609468620814485e-05 | 2.496861282671026e-05 | 4.32% | 4.51% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.643487140060622e-05 | 2.4980005689770237e-05 | 5.50% | 5.82% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.6392547868588842e-05 | 2.4925438980586656e-05 | 5.56% | 5.89% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.633236239901621e-05 | 2.5056321064650942e-05 | 4.85% | 5.09% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.608663246543723e-05 | 2.5072491028688816e-05 | 3.89% | 4.04% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.6238193168442388e-05 | 2.503293796167102e-05 | 4.59% | 4.81% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.6070779549556095e-05 | 2.4990072119492313e-05 | 4.15% | 4.32% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.6428894198936347e-05 | 2.500364260897814e-05 | 5.39% | 5.70% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.5545574077850555e-05 | 2.5041150567525505e-05 | 1.97% | 2.01% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.5887200331435713e-05 | 2.496427390842518e-05 | 3.57% | 3.70% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.6187473079141848e-05 | 2.5063098247173357e-05 | 4.29% | 4.49% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.632643620511001e-05 | 2.502166083091881e-05 | 4.96% | 5.21% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.6317287924421866e-05 | 2.4831859172557152e-05 | 5.64% | 5.98% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.6168099963908134e-05 | 2.4475200011055764e-05 | 6.47% | 6.92% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.591666358696612e-05 | 2.5207119796799367e-05 | 2.74% | 2.81% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.626520003327018e-05 | 2.4304290822011665e-05 | 7.47% | 8.07% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.621693633329507e-05 | 2.513024534504588e-05 | 4.14% | 4.32% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.5790323882780755e-05 | 2.4806139230710175e-05 | 3.82% | 3.97% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.620173568677602e-05 | 2.453135547769504e-05 | 6.38% | 6.81% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.616442634405775e-05 | 2.503705278273047e-05 | 4.31% | 4.50% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.637926094679903e-05 | 2.5000740518665967e-05 | 5.23% | 5.51% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.635679803054728e-05 | 2.5139770311379443e-05 | 4.62% | 4.84% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.629950908167551e-05 | 2.5015378156903998e-05 | 4.88% | 5.13% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.6257869144527124e-05 | 2.5058383373013998e-05 | 4.57% | 4.79% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.610623186310181e-05 | 2.5075997633451774e-05 | 3.95% | 4.11% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.6213389616538e-05 | 2.511619383731172e-05 | 4.19% | 4.37% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.6367944555818577e-05 | 2.4468702589395805e-05 | 7.20% | 7.76% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.6041396445555654e-05 | 2.506739946603589e-05 | 3.74% | 3.89% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.678060453109508e-05 | 2.5039323487273716e-05 | 6.50% | 6.95% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.585686019843064e-05 | 2.503214662441282e-05 | 3.19% | 3.29% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.603103942189282e-05 | 2.499124768611732e-05 | 3.99% | 4.16% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.6472882819120666e-05 | 2.524817683784849e-05 | 4.63% | 4.85% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.580708136352803e-05 | 2.517898220542302e-05 | 2.43% | 2.49% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.6009026801771456e-05 | 2.4397874510306273e-05 | 6.19% | 6.60% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.5736528884919152e-05 | 2.490426876923984e-05 | 3.23% | 3.34% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.6094191568902934e-05 | 2.4874388155774882e-05 | 4.67% | 4.90% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.6072179078658322e-05 | 2.5000994919364506e-05 | 4.11% | 4.28% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.5854022858275914e-05 | 2.5122594340341846e-05 | 2.83% | 2.91% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.58561408685155e-05 | 2.503254091783616e-05 | 3.19% | 3.29% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.6125152274682756e-05 | 2.498660985662373e-05 | 4.36% | 4.56% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.6102043398430166e-05 | 2.444160985537336e-05 | 6.36% | 6.79% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.5846064371573043e-05 | 2.5227466955998914e-05 | 2.39% | 2.45% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.6142898452980096e-05 | 2.5067847749116836e-05 | 4.11% | 4.29% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.616947947970829e-05 | 2.5027874358093133e-05 | 4.36% | 4.56% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.5778998795713447e-05 | 2.505120033340524e-05 | 2.82% | 2.91% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.6429431232628376e-05 | 2.4916575572383384e-05 | 5.72% | 6.07% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.6165011313394643e-05 | 2.5110215993902087e-05 | 4.03% | 4.20% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.6084090003574834e-05 | 2.502392923598554e-05 | 4.06% | 4.24% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.6195543650790766e-05 | 2.4944454717723043e-05 | 4.78% | 5.02% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.601850568331951e-05 | 2.5012172069427734e-05 | 3.87% | 4.02% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.6042990419097683e-05 | 2.499507650505854e-05 | 4.02% | 4.19% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.6107516381491006e-05 | 2.5041050842021944e-05 | 4.08% | 4.26% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.617353170229268e-05 | 2.4979340726022235e-05 | 4.56% | 4.78% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.6118012412786524e-05 | 2.5143142971302457e-05 | 3.73% | 3.88% | 1.04x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.190205505802825e-05 | 5.8450198711579395e-05 | 28.63% | 40.12% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.170729092825777e-05 | 5.874863119690662e-05 | 28.10% | 39.08% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.069407960096674e-05 | 5.9679795010934643e-05 | 26.04% | 35.21% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.12314015346696e-05 | 6.138778861878297e-05 | 24.43% | 32.33% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.160104374078338e-05 | 6.175301006822036e-05 | 24.32% | 32.14% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 7.972663030520922e-05 | 5.85494632876228e-05 | 26.56% | 36.17% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.845822487941159e-05 | 5.6724554333960415e-05 | 27.70% | 38.31% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.135769695436057e-05 | 5.923703278733046e-05 | 27.19% | 37.34% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.113990670768231e-05 | 5.8807849384829e-05 | 27.52% | 37.97% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.154624211377897e-05 | 5.85462769093683e-05 | 28.20% | 39.29% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.18705258858448e-05 | 5.837126603627627e-05 | 28.70% | 40.26% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.061867482363121e-05 | 5.87904148796982e-05 | 27.08% | 37.13% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.164336368080234e-05 | 5.862930986233534e-05 | 28.19% | 39.25% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.123653914141773e-05 | 5.885269174909576e-05 | 27.55% | 38.03% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.132343784814222e-05 | 6.102939756824982e-05 | 24.95% | 33.25% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.141440109488116e-05 | 5.879073412985033e-05 | 27.79% | 38.48% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.172427168722183e-05 | 6.161169959632245e-05 | 24.61% | 32.64% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.124869576322985e-05 | 5.900337700976497e-05 | 27.38% | 37.70% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.149631052604012e-05 | 5.874862597331045e-05 | 27.91% | 38.72% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.066786528581539e-05 | 5.8411180023574485e-05 | 27.59% | 38.10% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.023466513300957e-05 | 5.917059105921914e-05 | 26.25% | 35.60% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.093881939627078e-05 | 5.884580375130207e-05 | 27.30% | 37.54% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.138283065252773e-05 | 5.8904295133892596e-05 | 27.62% | 38.16% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.186260093674811e-05 | 5.860568839913526e-05 | 28.41% | 39.68% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.116943426205455e-05 | 5.924449918061589e-05 | 27.01% | 37.01% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.120408394250664e-05 | 5.85111351943576e-05 | 27.95% | 38.78% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.876746174602496e-05 | 5.7552310502889975e-05 | 26.93% | 36.86% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.876730902582358e-05 | 5.710091825038578e-05 | 27.51% | 37.94% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.144418856097798e-05 | 6.172779119693128e-05 | 24.21% | 31.94% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.316980719172397e-05 | 5.977446592730529e-05 | 28.13% | 39.14% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.199462270414963e-05 | 5.917410850678142e-05 | 27.83% | 38.57% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.104095528358426e-05 | 5.9146406784435386e-05 | 27.02% | 37.02% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.310306354455946e-05 | 5.93028556917301e-05 | 28.64% | 40.13% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.141737368931742e-05 | 5.963124043935262e-05 | 26.76% | 36.53% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.25241902679451e-05 | 5.976484770807768e-05 | 27.58% | 38.08% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.886983812121458e-05 | 5.724952948425073e-05 | 27.41% | 37.77% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.281775435214293e-05 | 5.9169430678889614e-05 | 28.55% | 39.97% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.417608764782422e-05 | 5.9314209080475435e-05 | 29.54% | 41.92% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.319122033608382e-05 | 5.933966911808087e-05 | 28.67% | 40.19% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.265329774259173e-05 | 5.9454525225229814e-05 | 28.07% | 39.02% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.240679514053813e-05 | 5.94882252717799e-05 | 27.81% | 38.53% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.325145555155935e-05 | 5.730732074936212e-05 | 31.16% | 45.27% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.337728445515648e-05 | 5.966103400967514e-05 | 28.44% | 39.75% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.25985519625906e-05 | 5.957801470789463e-05 | 27.87% | 38.64% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.347735177637699e-05 | 5.8825182461660046e-05 | 29.53% | 41.91% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.1939354262498e-05 | 5.933974143845955e-05 | 27.58% | 38.09% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.17819920470558e-05 | 5.835465623937086e-05 | 28.65% | 40.15% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.302058328237057e-05 | 5.9199460803275745e-05 | 28.69% | 40.24% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.093981283124432e-05 | 5.911813074581491e-05 | 26.96% | 36.91% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.164938427122411e-05 | 5.980639175643249e-05 | 26.75% | 36.52% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.330218083446591e-05 | 5.926862987925616e-05 | 28.85% | 40.55% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.19920958790219e-05 | 5.908041871301821e-05 | 27.94% | 38.78% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.142708398122481e-05 | 5.972577983943391e-05 | 26.65% | 36.33% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.21709396271509e-05 | 5.9299248667525986e-05 | 27.83% | 38.57% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.256669176497261e-05 | 5.9994945070079915e-05 | 27.34% | 37.62% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 7.976019635343729e-05 | 5.815708835104215e-05 | 27.09% | 37.15% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.98286578021418e-05 | 5.824653765227238e-05 | 27.04% | 37.05% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.25796424990234e-05 | 6.0115860100166886e-05 | 27.20% | 37.37% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.221177377813621e-05 | 5.979773372745636e-05 | 27.26% | 37.48% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.216207709266582e-05 | 5.9110965761820465e-05 | 28.06% | 39.00% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.194188133174892e-05 | 6.039795492483102e-05 | 26.29% | 35.67% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.287200367565296e-05 | 6.292543955090565e-05 | 24.07% | 31.70% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.20580618738929e-05 | 5.9421001879558066e-05 | 27.59% | 38.10% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.214715565959232e-05 | 6.000908960003455e-05 | 26.95% | 36.89% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.902321731933223e-05 | 5.79438035459925e-05 | 26.67% | 36.38% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.090270497379175e-05 | 5.928754875483788e-05 | 26.72% | 36.46% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.158102180734082e-05 | 5.954889029588511e-05 | 27.01% | 37.00% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.261015883470037e-05 | 5.9769908334597517e-05 | 27.65% | 38.21% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.197285480853687e-05 | 5.9855269830770116e-05 | 26.98% | 36.95% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.082971391521284e-05 | 5.8616459494557694e-05 | 27.48% | 37.90% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.191758408597244e-05 | 5.942545456855782e-05 | 27.46% | 37.85% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.210478884914876e-05 | 6.0939779052637546e-05 | 25.78% | 34.73% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.235797400619659e-05 | 5.945161705816332e-05 | 27.81% | 38.53% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.223326528696751e-05 | 5.997744601266052e-05 | 27.06% | 37.11% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.161519641204892e-05 | 6.011565774682783e-05 | 26.34% | 35.76% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.30897822805007e-05 | 5.922792924489062e-05 | 28.72% | 40.29% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.17921490077297e-05 | 5.9807399646313206e-05 | 26.88% | 36.76% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.128512032539752e-05 | 5.951662085910431e-05 | 26.78% | 36.58% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.266815755810955e-05 | 5.979573942588224e-05 | 27.67% | 38.25% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.309709312318749e-05 | 5.9991909882416714e-05 | 27.81% | 38.51% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.296749269275383e-05 | 5.94908367129123e-05 | 28.30% | 39.46% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.19051385285341e-05 | 5.935408635084744e-05 | 27.53% | 37.99% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.18083181221571e-05 | 5.970398118369929e-05 | 27.02% | 37.02% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.187733487914902e-05 | 6.0055291321559886e-05 | 26.65% | 36.34% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.992251598618023e-05 | 5.819589503585526e-05 | 27.18% | 37.33% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.037316680653489e-05 | 5.8330634275527654e-05 | 27.43% | 37.79% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.242176003625326e-05 | 6.0245213721309574e-05 | 26.91% | 36.81% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.015846697710546e-05 | 5.8706026385906735e-05 | 26.76% | 36.54% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.108805876855107e-05 | 5.87626149217316e-05 | 27.53% | 37.99% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.048997685325654e-05 | 5.84297715096826e-05 | 27.41% | 37.76% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.292796461819884e-05 | 5.8486736839669685e-05 | 29.47% | 41.79% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.26392038422193e-05 | 5.873340065928271e-05 | 28.93% | 40.70% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.08827396139293e-05 | 5.920024676158285e-05 | 26.81% | 36.63% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.916314172891523e-05 | 5.686608630704155e-05 | 28.17% | 39.21% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.093597118480389e-05 | 5.783815063842277e-05 | 28.54% | 39.94% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.136868470568088e-05 | 5.9471805773450906e-05 | 26.91% | 36.82% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.225135842367646e-05 | 5.9131160806483594e-05 | 28.11% | 39.10% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010594847788109061 | 8.00834757032629e-05 | 24.41% | 32.30% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.913727063910193e-05 | 5.699335920612329e-05 | 27.98% | 38.85% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.135078483990532e-05 | 5.9110079832393735e-05 | 27.34% | 37.63% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.205088200376748e-05 | 5.899702569414764e-05 | 28.10% | 39.08% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.138645317401903e-05 | 5.854299581837516e-05 | 28.07% | 39.02% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.234991861993906e-05 | 5.9721071356837776e-05 | 27.48% | 37.89% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.144910387763693e-05 | 5.821708759586845e-05 | 28.52% | 39.91% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.891837116546039e-05 | 7.466435760232156e-05 | 24.52% | 32.48% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.850348352087585e-05 | 5.6982335217456296e-05 | 27.41% | 37.77% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.760633353403194e-05 | 7.52435495783675e-05 | 22.91% | 29.72% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.223329078956685e-05 | 5.8803497092513e-05 | 28.49% | 39.84% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.115679760511231e-05 | 5.793826896934872e-05 | 28.61% | 40.07% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 7.937256544204162e-05 | 5.8250118486195295e-05 | 26.61% | 36.26% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.083608175239437e-05 | 5.87274037695151e-05 | 27.35% | 37.65% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.189827454947421e-05 | 5.838408962212363e-05 | 28.71% | 40.27% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.242875006355554e-05 | 5.8969677315462686e-05 | 28.46% | 39.78% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.89175656574522e-05 | 5.731766755132459e-05 | 27.37% | 37.68% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.851407287344088e-05 | 5.786365653227941e-05 | 26.30% | 35.69% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.260480480418185e-05 | 5.903982029041962e-05 | 28.53% | 39.91% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.814026804441602e-05 | 5.6386132524526094e-05 | 27.84% | 38.58% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.017263550103868e-05 | 5.816999857161755e-05 | 27.44% | 37.82% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.006110151029976e-05 | 5.8124348477756675e-05 | 27.40% | 37.74% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 7.876591438625142e-05 | 6.0257353806405346e-05 | 23.50% | 30.72% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 7.903078977016538e-05 | 5.982572450331995e-05 | 24.30% | 32.10% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.773308323256869e-05 | 5.6636287733386675e-05 | 27.14% | 37.25% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.639663554671128e-05 | 5.775758167551539e-05 | 24.40% | 32.27% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.81303588813795e-05 | 5.725981365323552e-05 | 26.71% | 36.45% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.774701925939765e-05 | 5.703913295669419e-05 | 26.63% | 36.30% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 7.860223952815383e-05 | 5.7151857254787944e-05 | 27.29% | 37.53% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010290262609719991 | 7.896231765078977e-05 | 23.27% | 30.32% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 7.95360196457024e-05 | 5.774262123154009e-05 | 27.40% | 37.74% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.878914998800314e-05 | 5.715242566710702e-05 | 27.46% | 37.86% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.767358597453693e-05 | 5.643060366149547e-05 | 27.35% | 37.64% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.847192711277112e-05 | 5.614372102006737e-05 | 28.45% | 39.77% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.874835613716616e-05 | 5.7549646771362244e-05 | 26.92% | 36.84% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.762340767872433e-05 | 5.8724851268209585e-05 | 24.35% | 32.18% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.582390739077665e-05 | 7.320489916328826e-05 | 23.60% | 30.90% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.967478815448968e-05 | 5.9718259280944574e-05 | 25.05% | 33.42% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.757309219781908e-05 | 7.330848287147803e-05 | 24.87% | 33.10% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 7.891804184993537e-05 | 5.744907150487832e-05 | 27.20% | 37.37% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.70791743937304e-05 | 5.6317592182701404e-05 | 26.94% | 36.87% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.806451405407596e-05 | 5.700053427207909e-05 | 26.98% | 36.95% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.857099069931976e-05 | 5.713680714944793e-05 | 27.28% | 37.51% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.797843557715637e-05 | 5.6590121396239e-05 | 27.43% | 37.80% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.91271529287719e-05 | 5.727304620726436e-05 | 27.62% | 38.16% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.455710118597945e-05 | 5.550225800153686e-05 | 25.56% | 34.33% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.583640835984083e-05 | 5.579328985775416e-05 | 26.43% | 35.92% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.785804068681419e-05 | 5.832495336589357e-05 | 25.09% | 33.49% | 1.33x | ✅ |
| `hexbytes_new['']` | 7.239538318531405e-05 | 3.5520244787048235e-05 | 50.94% | 103.81% | 2.04x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.271893001841855e-05 | 4.899280485230785e-05 | 47.16% | 89.25% | 1.89x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.575221323023535e-05 | 4.888058851826486e-05 | 48.95% | 95.89% | 1.96x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.7883177232092e-05 | 4.511337884691348e-05 | 48.67% | 94.81% | 1.95x | ✅ |
| `hexbytes_new['0x']` | 7.699806494895047e-05 | 3.665867148403916e-05 | 52.39% | 110.04% | 2.10x | ✅ |
| `hexbytes_new['0x1234']` | 8.600555050495006e-05 | 4.238318178351283e-05 | 50.72% | 102.92% | 2.03x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.604459163015991e-05 | 4.3786711321365664e-05 | 49.11% | 96.51% | 1.97x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.585228275704322e-05 | 4.481197571309732e-05 | 47.80% | 91.58% | 1.92x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.548993819746595e-05 | 4.287919580635392e-05 | 49.84% | 99.37% | 1.99x | ✅ |
| `hexbytes_new['abc']` | 8.379688244811314e-05 | 4.594370657998646e-05 | 45.17% | 82.39% | 1.82x | ✅ |
| `hexbytes_new['deadbeef']` | 7.703279646304496e-05 | 4.002155664163809e-05 | 48.05% | 92.48% | 1.92x | ✅ |
| `hexbytes_new[0-9]` | 4.255201587646131e-05 | 2.3822195320689093e-05 | 44.02% | 78.62% | 1.79x | ✅ |
| `hexbytes_new[0]` | 0.00012382683575304032 | 6.344094079149925e-05 | 48.77% | 95.18% | 1.95x | ✅ |
| `hexbytes_new[123456]` | 0.00012736627308714352 | 6.600093049689808e-05 | 48.18% | 92.98% | 1.93x | ✅ |
| `hexbytes_new[2**16]` | 0.00012897795164358239 | 6.487771089191269e-05 | 49.70% | 98.80% | 1.99x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00013082188331677068 | 7.121438845833245e-05 | 45.56% | 83.70% | 1.84x | ✅ |
| `hexbytes_new[2**32]` | 0.00013090964748128987 | 6.883188774955199e-05 | 47.42% | 90.19% | 1.90x | ✅ |
| `hexbytes_new[2**64]` | 0.00013234217512782725 | 7.207485655417374e-05 | 45.54% | 83.62% | 1.84x | ✅ |
| `hexbytes_new[2**8]` | 0.00012656284305533625 | 6.5934986791527e-05 | 47.90% | 91.95% | 1.92x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.394889859959653e-05 | 2.489777864960037e-05 | 43.35% | 76.52% | 1.77x | ✅ |
| `hexbytes_new[False]` | 5.9421317056013496e-05 | 2.5600522773109973e-05 | 56.92% | 132.11% | 2.32x | ✅ |
| `hexbytes_new[True]` | 6.122901804766161e-05 | 2.555306354962171e-05 | 58.27% | 139.62% | 2.40x | ✅ |
| `hexbytes_new[all byte values]` | 4.361410767606071e-05 | 2.494212656178286e-05 | 42.81% | 74.86% | 1.75x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.636005571512527e-05 | 2.8407492185022584e-05 | 38.72% | 63.20% | 1.63x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.366297633269946e-05 | 2.8314751009374586e-05 | 35.15% | 54.21% | 1.54x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.305698300029857e-05 | 2.392672448350454e-05 | 44.43% | 79.95% | 1.80x | ✅ |
| `hexbytes_new[b'']` | 4.218116996220105e-05 | 2.4364013039155956e-05 | 42.24% | 73.13% | 1.73x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.330886925997634e-05 | 2.3950613225200497e-05 | 44.70% | 80.83% | 1.81x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.29631525841689e-05 | 2.3973023804469588e-05 | 44.20% | 79.21% | 1.79x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.324742560753276e-05 | 2.452612902722461e-05 | 43.29% | 76.33% | 1.76x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.461525659896567e-05 | 3.6862997319738066e-05 | 32.50% | 48.16% | 1.48x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.328114628485533e-05 | 2.4066433808168495e-05 | 44.40% | 79.84% | 1.80x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.2151113677848375e-05 | 2.3789947155470942e-05 | 43.56% | 77.18% | 1.77x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.247729284841172e-05 | 2.3693485734686907e-05 | 44.22% | 79.28% | 1.79x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.300596223999229e-05 | 2.396598464589562e-05 | 44.27% | 79.45% | 1.79x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.266115568350396e-05 | 2.3974410912134425e-05 | 43.80% | 77.94% | 1.78x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.5591184548074906e-05 | 2.8461653837884087e-05 | 37.57% | 60.18% | 1.60x | ✅ |
| `hexbytes_new[b'a'*1024]` | 4.9851260285357335e-05 | 3.090754121823807e-05 | 38.00% | 61.29% | 1.61x | ✅ |
| `hexbytes_new[b'abc']` | 4.2788194077790694e-05 | 2.4082750652291188e-05 | 43.72% | 77.67% | 1.78x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.60410925873991e-05 | 3.471116035312673e-05 | 47.44% | 90.26% | 1.90x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.914625266588026e-05 | 3.690075767415285e-05 | 46.63% | 87.38% | 1.87x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.893834300865628e-05 | 3.6885988731108167e-05 | 46.49% | 86.90% | 1.87x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.782844254687431e-05 | 3.5451553353238613e-05 | 47.73% | 91.33% | 1.91x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.782390388765773e-05 | 3.552249109043532e-05 | 47.63% | 90.93% | 1.91x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.67185640121324e-05 | 3.4829976312538045e-05 | 47.80% | 91.56% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.605508556124108e-05 | 3.286211570580629e-05 | 50.25% | 101.01% | 2.01x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.779497060068928e-05 | 3.53379847485859e-05 | 47.88% | 91.85% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.795998751739128e-05 | 3.52839250944628e-05 | 48.08% | 92.61% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.751921763990596e-05 | 3.57641056822381e-05 | 47.03% | 88.79% | 1.89x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 8.793436783201007e-05 | 5.409674866933042e-05 | 38.48% | 62.55% | 1.63x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.818429403025022e-05 | 3.5421369547562424e-05 | 48.05% | 92.49% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.657351777198843e-05 | 3.520977739848331e-05 | 47.11% | 89.08% | 1.89x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.710773306851117e-05 | 3.4825014287408976e-05 | 48.11% | 92.70% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.70592561946289e-05 | 3.53561010359033e-05 | 47.28% | 89.67% | 1.90x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.775643700504102e-05 | 3.538676876071315e-05 | 47.77% | 91.47% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.848984872099741e-05 | 4.072449177785144e-05 | 40.54% | 68.18% | 1.68x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.380701890384208e-05 | 4.7176064361842946e-05 | 43.71% | 77.65% | 1.78x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.678666477738056e-05 | 3.55195206439483e-05 | 46.82% | 88.03% | 1.88x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.410839917494443e-05 | 4.717926727798912e-05 | 43.91% | 78.27% | 1.78x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.816687235560789e-05 | 3.561665327357557e-05 | 47.75% | 91.39% | 1.91x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.741746431080832e-05 | 3.85076906388707e-05 | 42.88% | 75.08% | 1.75x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.77120910774788e-05 | 3.5157487903688116e-05 | 48.08% | 92.60% | 1.93x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.7645705614501e-05 | 3.531483122247726e-05 | 47.79% | 91.55% | 1.92x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.719298721086315e-05 | 3.493930287367469e-05 | 48.00% | 92.31% | 1.92x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.891126567604585e-05 | 3.609885126780571e-05 | 47.62% | 90.90% | 1.91x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.76328340807397e-05 | 3.607140918789805e-05 | 46.67% | 87.50% | 1.87x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.741198097559836e-05 | 3.607452426907097e-05 | 46.49% | 86.87% | 1.87x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.8619901099154e-05 | 3.542732529222626e-05 | 48.37% | 93.69% | 1.94x | ✅ |
| `hexbytes_new[long alternating]` | 4.985064431724976e-05 | 3.193301172038215e-05 | 35.94% | 56.11% | 1.56x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.25449164945315e-05 | 4.2207286488102905e-05 | 48.87% | 95.57% | 1.96x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.392562709321615e-05 | 4.450473018035159e-05 | 46.97% | 88.58% | 1.89x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.336987784531729e-05 | 4.435901196969995e-05 | 46.79% | 87.94% | 1.88x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.267425087041457e-05 | 4.255025673016641e-05 | 48.53% | 94.30% | 1.94x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.27539870320632e-05 | 4.337342290621815e-05 | 47.59% | 90.79% | 1.91x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.230589186634227e-05 | 4.2789480382640865e-05 | 48.01% | 92.35% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.074040938435627e-05 | 4.1321047570074934e-05 | 48.82% | 95.40% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.291010791055197e-05 | 4.256842356148503e-05 | 48.66% | 94.77% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.365409365056542e-05 | 4.21986945051236e-05 | 49.56% | 98.24% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.371263713533379e-05 | 4.219001291685432e-05 | 49.60% | 98.42% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010357119593992012 | 6.42613875150242e-05 | 37.95% | 61.17% | 1.61x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.224980860042635e-05 | 4.264554388116468e-05 | 48.15% | 92.87% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.292752825457658e-05 | 4.141714861966787e-05 | 50.06% | 100.23% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.238332122393207e-05 | 4.142698710832614e-05 | 49.71% | 98.86% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.231078380222861e-05 | 4.1962169950030776e-05 | 49.02% | 96.15% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.269196567533226e-05 | 4.162402209689623e-05 | 49.66% | 98.66% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.319927857773963e-05 | 4.314480650914906e-05 | 48.14% | 92.84% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.584198540828047e-05 | 5.6534415530760474e-05 | 41.01% | 69.53% | 1.70x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.17054874804467e-05 | 4.304044771703589e-05 | 47.32% | 89.83% | 1.90x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.873640308162302e-05 | 5.730435388961236e-05 | 41.96% | 72.30% | 1.72x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.402987621682982e-05 | 4.3260928817915134e-05 | 48.52% | 94.24% | 1.94x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.197254192382429e-05 | 4.332491892490334e-05 | 47.15% | 89.20% | 1.89x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.209335797468062e-05 | 4.176186695850657e-05 | 49.13% | 96.57% | 1.97x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.375965716018747e-05 | 4.2183215922747834e-05 | 49.64% | 98.56% | 1.99x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.283999870205557e-05 | 4.2022767092811226e-05 | 49.27% | 97.13% | 1.97x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.248320038360672e-05 | 4.272988401096181e-05 | 48.20% | 93.03% | 1.93x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.28097827220534e-05 | 4.3055289478902146e-05 | 48.01% | 92.33% | 1.92x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.339059637592367e-05 | 4.3034886511865586e-05 | 48.39% | 93.77% | 1.94x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.567040594610941e-05 | 4.261740047446196e-05 | 50.25% | 101.02% | 2.01x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.348556839935816e-05 | 2.4512205121454563e-05 | 43.63% | 77.40% | 1.77x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.269091101576953e-05 | 2.3697462013610753e-05 | 44.49% | 80.15% | 1.80x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.2777562950411724e-05 | 2.380688103167712e-05 | 44.35% | 79.69% | 1.80x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.2638561505403094e-05 | 2.4050274718794908e-05 | 43.60% | 77.29% | 1.77x | ✅ |
| `hexbytes_new[palindrome]` | 4.27453059841874e-05 | 2.3745413456240237e-05 | 44.45% | 80.01% | 1.80x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.2561701663041425e-05 | 2.446982859328286e-05 | 42.51% | 73.94% | 1.74x | ✅ |
| `hexbytes_new[single 0xff]` | 4.185910402293587e-05 | 2.4270930125960274e-05 | 42.02% | 72.47% | 1.72x | ✅ |
| `hexbytes_new[single null byte]` | 4.228629922753409e-05 | 2.417270210649887e-05 | 42.84% | 74.93% | 1.75x | ✅ |
| `hexbytes_new[two patterns]` | 4.591206334918445e-05 | 2.4654295950845653e-05 | 46.30% | 86.22% | 1.86x | ✅ |
| `hexbytes_repr[0-9]` | 3.418241894109143e-05 | 1.5640806819126045e-05 | 54.24% | 118.55% | 2.19x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012455759675343103 | 4.20029445204317e-05 | 66.28% | 196.54% | 2.97x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00012399669570556965 | 4.1977952270701036e-05 | 66.15% | 195.39% | 2.95x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.363956853137617e-05 | 2.1023779403857818e-05 | 60.81% | 155.14% | 2.55x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 5.3882179270469614e-05 | 2.1126533145213887e-05 | 60.79% | 155.05% | 2.55x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.4831799027846415e-05 | 1.906886929602977e-05 | 57.47% | 135.10% | 2.35x | ✅ |
| `hexbytes_repr[b'']` | 2.5370206035169732e-05 | 1.1921789334289708e-05 | 53.01% | 112.81% | 2.13x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 4.121190211917548e-05 | 1.7667223999136495e-05 | 57.13% | 133.27% | 2.33x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 3.245265931039204e-05 | 1.456845276757761e-05 | 55.11% | 122.76% | 2.23x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.64906236397544e-05 | 2.4800800663472998e-05 | 62.70% | 168.10% | 2.68x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007704442496100591 | 0.00022428377866711655 | 70.89% | 243.51% | 3.44x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 3.1721874021872736e-05 | 1.4718861780486846e-05 | 53.60% | 115.52% | 2.16x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 3.27528625169493e-05 | 1.5007590689378502e-05 | 54.18% | 118.24% | 2.18x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.3712215027034215e-05 | 1.5458961814083307e-05 | 54.14% | 118.08% | 2.18x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.3563442787853784e-05 | 1.5450205392727104e-05 | 53.97% | 117.24% | 2.17x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 3.247125433351527e-05 | 1.4499116127474147e-05 | 55.35% | 123.95% | 2.24x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.3923372554174365e-05 | 2.087027262086028e-05 | 61.30% | 158.37% | 2.58x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.0004058328797078873 | 0.0001220435819312167 | 69.93% | 232.53% | 3.33x | ✅ |
| `hexbytes_repr[b'abc']` | 3.13864643700872e-05 | 1.4752941573838409e-05 | 53.00% | 112.75% | 2.13x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0004035765642150201 | 0.00012360933601651022 | 69.37% | 226.49% | 3.26x | ✅ |
| `hexbytes_repr[mixed pattern]` | 0.00010218066666572906 | 3.6082206304099303e-05 | 64.69% | 183.19% | 2.83x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.4109338846961627e-05 | 1.5577582469946417e-05 | 54.33% | 118.96% | 2.19x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.324027082085065e-05 | 1.5208743889122018e-05 | 54.25% | 118.56% | 2.19x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 3.253327224929443e-05 | 1.4716956771583104e-05 | 54.76% | 121.06% | 2.21x | ✅ |
| `hexbytes_repr[palindrome]` | 3.715057385175277e-05 | 1.656776193497899e-05 | 55.40% | 124.23% | 2.24x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.640536926771336e-05 | 2.474922034189586e-05 | 62.73% | 168.31% | 2.68x | ✅ |
| `hexbytes_repr[single 0xff]` | 3.047126392411055e-05 | 1.4701897983668637e-05 | 51.75% | 107.26% | 2.07x | ✅ |
| `hexbytes_repr[single null byte]` | 3.0194841633545537e-05 | 1.4870477223474284e-05 | 50.75% | 103.05% | 2.03x | ✅ |
| `hexbytes_repr[two patterns]` | 5.3694300892661906e-05 | 2.1243310745578296e-05 | 60.44% | 152.76% | 2.53x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.7011461703437594e-05 | 1.4447637746468957e-05 | 15.07% | 17.75% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.3624700243960054e-05 | 4.067795043406405e-05 | 6.75% | 7.24% | 1.07x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.358222520035859e-05 | 4.120778253433921e-05 | 5.45% | 5.76% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.2371402345278093e-05 | 1.9528558522480486e-05 | 12.71% | 14.56% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.229433039469225e-05 | 1.9681038280080813e-05 | 11.72% | 13.28% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.0211407909114045e-05 | 1.765964146396013e-05 | 12.63% | 14.45% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0217659664179808e-05 | 1.109681156490172e-05 | -8.60% | -7.92% | 0.92x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.892760643522089e-05 | 1.6308106522845825e-05 | 13.84% | 16.06% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.6582131059514117e-05 | 1.3677119388898195e-05 | 17.52% | 21.24% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.611754853592565e-05 | 2.3003175454998203e-05 | 11.92% | 13.54% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022692816503327578 | 0.00022162465293096902 | 2.34% | 2.39% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.61640680239987e-05 | 1.360670637044921e-05 | 15.82% | 18.79% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.6735559333667895e-05 | 1.3618294400219647e-05 | 18.63% | 22.89% | 1.23x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.6780826163796224e-05 | 1.4182270495082473e-05 | 15.49% | 18.32% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.7060891448410027e-05 | 1.4197655314799407e-05 | 16.78% | 20.17% | 1.20x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.6634304435631527e-05 | 1.3603228536988941e-05 | 18.22% | 22.28% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.2209234218912484e-05 | 1.9626173619405502e-05 | 11.63% | 13.16% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012424101877815243 | 0.000121437942191555 | 2.26% | 2.31% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.642297573258303e-05 | 1.3674556493482641e-05 | 16.74% | 20.10% | 1.20x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012481583129453103 | 0.00012129799766865468 | 2.82% | 2.90% | 1.03x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.6367893580964945e-05 | 3.3813030095519924e-05 | 7.03% | 7.56% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.705462746924875e-05 | 1.4417557784139614e-05 | 15.46% | 18.29% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.7194169783742907e-05 | 1.4118387954444102e-05 | 17.89% | 21.79% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.6931972886359484e-05 | 1.3818936144202788e-05 | 18.39% | 22.53% | 1.23x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.8052643275461886e-05 | 1.5364275651939067e-05 | 14.89% | 17.50% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.6246240605640804e-05 | 2.2959149856742126e-05 | 12.52% | 14.32% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.586963485695439e-05 | 1.3447376643728572e-05 | 15.26% | 18.01% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.611498230691138e-05 | 1.3493271545888434e-05 | 16.27% | 19.43% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.236815135193053e-05 | 1.959053862264693e-05 | 12.42% | 14.18% | 1.14x | ✅ |
