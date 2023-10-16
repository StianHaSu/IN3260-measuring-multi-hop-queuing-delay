class CustomCluster:

    def __init__(self, centroid, cluster):
        self.centroid = centroid
        self.cluster = cluster
        self.type = None

    def set_type(self, type):
        self.type = type