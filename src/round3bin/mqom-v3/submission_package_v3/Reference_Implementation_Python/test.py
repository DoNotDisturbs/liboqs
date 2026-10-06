import argparse
parser = argparse.ArgumentParser()
parser.add_argument('testname',
    nargs='+',
    choices=['all', 'field', 'parsing', 'rijndael', 'ggm', 'blc', 'piop', 'sign'],
    help="Tests to execute"
)
arguments = parser.parse_args()
tests_to_execute = arguments.testname

def should_be_execute(name):
    return ('all' in tests_to_execute) or (name in tests_to_execute)

if should_be_execute('field'):
    from tests.test_field import run_test_field
    run_test_field()

if should_be_execute('parsing'):
    from tests.test_parsing import run_test_parsing
    run_test_parsing()

if should_be_execute('rijndael'):
    from tests.test_rijndael import run_test_rijndael
    run_test_rijndael()

if should_be_execute('ggm'):
    from tests.test_ggm import run_test_ggm
    run_test_ggm()

if should_be_execute('blc'):
    from tests.test_blc import run_test_blc
    run_test_blc()

if should_be_execute('piop'):
    from tests.test_piop import run_test_piop
    run_test_piop()

if should_be_execute('sign'):
    from tests.test_sign import run_test_sign
    run_test_sign()
