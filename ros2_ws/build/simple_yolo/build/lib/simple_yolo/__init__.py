"""
Expose the vendored Ultralytics copy as a real top-level package so that
`import ultralytics.*` inside the library works.
"""
import importlib, sys

# Import the inner package once…
_ultra = importlib.import_module('.ultralytics.ultralytics', __name__)

# …and publish it under the public name python expects
sys.modules['ultralytics'] = _ultra